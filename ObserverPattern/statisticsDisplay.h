#ifndef STATISTICSDISPLAY_H
#define STATISTICSDISPLAY_H

#include <iostream>
#include "observer.h"
#include "displayElement.h"
#include "weatherData.h"

class StatisticsDisplay : public Observer, public DisplayElement
{
public:
	StatisticsDisplay(WeatherData * wd)
	{
		weatherData = wd;
		weatherData->registerObserver(this);
	}

	void display() override;
	void update() override;

private:
	float minTemp = 200.0;
	float maxTemp = 0;
	float tempSum = 0;
	int readingsNum = 0;
	WeatherData * weatherData = NULL;
};

void StatisticsDisplay::update()
{
	float t = weatherData->getTemperature();
	tempSum += t;
	readingsNum++;
	
	if(t < minTemp)
		 minTemp = t;

	if(t > maxTemp)
		maxTemp = t;

	display();
}

void StatisticsDisplay::display()
{
	std::cout<<"< Avg / Max / Min > Temperature = "<<(tempSum/readingsNum)<<" / "<<maxTemp<<" / "<<minTemp<<"\n";
}

#endif /* #ifndef STATISTICSDISPLAY_H */