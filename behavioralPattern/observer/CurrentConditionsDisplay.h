#include "DisplayInterface.h"
#include "ObserverInterface.h"
#include "WeatherDataSubject.h"
#pragma once
class CurrentConditionsDisplay: public DisplayInterface, ObserverInterface{
    float temperature;
    float humidity;
    WeatherDataSubject* weatherDataSubject;
    public:
        CurrentConditionsDisplay(WeatherDataSubject* weatherDataSubject){
            this->weatherDataSubject=weatherDataSubject;
            weatherDataSubject->addObserver(this);
        }
        void update(float temp, float humidity, float pressure) override{
            this->temperature=temp;
            this->humidity=humidity;
            display();
        }
        void display() override{
            cout<<"[CurrentConditionsDisplay]: Temp->"<<temperature<<", Humidity->"<<humidity<<endl;
        }
};