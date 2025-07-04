#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include <iostream>
#include "observer.h"
#include <list>
#include "subject.h"

class WeatherData : public Subject
{
public:
	WeatherData()
	{
		temperature = 0;
		pressure = 0;
		humidity = 0;
	}

	void setMeasurements(float t, float p, float h);

	inline void registerObserver(Observer * o) override
	{
		observers.push_back(o);
	}
	
	inline void removeObserver(Observer * o) override
	{
		if(!observers.empty())
			observers.remove(o);
	}

	inline void notifyObservers() override
	{
		for(auto o : observers)
		{
			o->update();
		}
	}


	inline void measurementsChanged()
	{
		notifyObservers();
	}

	inline float getTemperature()
	{
		return temperature;
	}

	inline float getPressure()
	{
		return pressure;
	}

	inline float getHumidity()
	{
		return humidity;
	}


private:
	float temperature;
	float pressure;
	float humidity;
	std::list<Observer *> observers = {};
};

void WeatherData::setMeasurements(float t, float h, float p)
{
	temperature = t;
	pressure = p;
	humidity = h;

	measurementsChanged();
}



#endif /* #ifndef WEATHERDATA_H */