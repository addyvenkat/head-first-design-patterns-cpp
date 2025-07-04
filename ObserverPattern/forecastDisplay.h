#ifndef FORECASTDISPLAY_H
#define FORECASTDISPLAY_H

#include <iostream>
#include "observer.h"
#include "displayElement.h"
#include "weatherData.h"

class ForecastDisplay : public Observer, public DisplayElement
{
public:
	ForecastDisplay(WeatherData * wd)
	{
		weatherData = wd;
		weatherData->registerObserver(this);
	}

	void display() override;
	void update() override;

private:
	float prevPressure = 0;
	float currentPressure = 29.9;
	WeatherData * weatherData = NULL;
};

void ForecastDisplay::update()
{
	prevPressure = currentPressure;
	currentPressure = weatherData->getPressure();

	display();
}

void ForecastDisplay::display()
{
	std::cout<<"Forecast: ";

	if(currentPressure > prevPressure)
		std::cout<<"Improving weather on the way!\n";
	else if(currentPressure == prevPressure)
		std::cout<<"More of the same.\n";
	else if(currentPressure < prevPressure)
		std::cout<<"Watch out for cooler, rainy weather!\n";
}

#endif /* #ifndef FORECASTDISPLAY_H */