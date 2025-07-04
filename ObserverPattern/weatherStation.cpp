// Observer Pattern Example: Weather Station

#include <iostream>
#include "weatherData.h"
#include "subject.h"
#include "observer.h"
#include "displayElement.h"
#include "currentConditionsDisplay.h"
#include "statisticsDisplay.h"
#include "forecastDisplay.h"

int main()
{
	auto weatherData = WeatherData();
	auto currentConditionsDisplay = CurrentConditionsDisplay(&weatherData);
	auto statisticsDisplay = StatisticsDisplay(&weatherData);
	auto forecastDisplay = ForecastDisplay(&weatherData);

	weatherData.setMeasurements(80, 65, 30.4);
	weatherData.setMeasurements(82, 70, 29.2);
	weatherData.setMeasurements(78, 90, 29.2);

	return 0;
}