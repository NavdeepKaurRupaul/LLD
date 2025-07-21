#include<iostream>
using namespace std;
#include "CurrentConditionsDisplay.h"
#include "WeatherDataSubject.h"
#include "AnotherConditionsDisplay.h"

int main(){
    WeatherDataSubject* weatherDataSubject = new WeatherDataSubject();
    CurrentConditionsDisplay* observer = new CurrentConditionsDisplay(weatherDataSubject);
    AnotherConditionsDisplay* anotherObserver = new AnotherConditionsDisplay(weatherDataSubject);

    weatherDataSubject->setMeasurements(80,65,30);
}