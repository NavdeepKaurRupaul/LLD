#include "DisplayInterface.h"
#include "ObserverInterface.h"
#include "WeatherDataSubject.h"
#pragma once
class AnotherConditionsDisplay: public DisplayInterface, ObserverInterface{
    float pressure;
    float humidity;
    WeatherDataSubject* weatherDataSubject;
    public:
        AnotherConditionsDisplay(WeatherDataSubject* weatherDataSubject){
            this->weatherDataSubject=weatherDataSubject;
            weatherDataSubject->addObserver(this);
        }
        void update(float temp, float humidity, float pressure) override{
            this->pressure=pressure;
            this->humidity=humidity;
            display();
        }
        void display() override{
            cout<<"[AnotherConditionsDisplay]: Pressure->"<<pressure<<", Humidity->"<<humidity<<endl;
        }
};