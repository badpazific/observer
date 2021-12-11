#include "WeatherData.h"
#include "CurrentCondidtionDisplay.h"

int main()
{
    WeatherData* weatherData = new WeatherData();
    CurrentCondidtionDisplay* currentDisplay = new CurrentCondidtionDisplay(weatherData);

    weatherData->setMeasurements(15, 60, 772);

    return 0;
}
