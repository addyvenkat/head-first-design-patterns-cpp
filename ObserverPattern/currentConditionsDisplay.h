#ifndef CURRENTCONDITIONSDISPLAY_H
#define CURRENTCONDITIONSDISPLAY_H

#include <iostream>
#include "observer.h"
#include "displayElement.h"
#include "weatherData.h"

class CurrentConditionsDisplay : public Observer, public DisplayElement
{
public:
	CurrentConditionsDisplay(WeatherData * wd)
	{
		weatherData = wd;
		weatherData->registerObserver(this);
	}

	void display() override;
	void update() override;

private:
	float temperature;
	float humidity;
	WeatherData * weatherData = NULL;
};

void CurrentConditionsDisplay::update()
{
	this->temperature = weatherData->getTemperature();
	this->humidity = weatherData->getHumidity();
	display();
}

void CurrentConditionsDisplay::display()
{
	std::cout<<"Current Conditions: "<<temperature<<"F degrees and "<<humidity<<"% humidity\n";
}

#endif /* #ifndef CURRENTCONDITIONSDISPLAY_H */