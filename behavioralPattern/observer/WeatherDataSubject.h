#include <iostream>
#include <vector>
#include <algorithm> 
#include "SubjectInterface.h"
#include "ObserverInterface.h"
#pragma once
using namespace std;

class WeatherDataSubject : public SubjectInterface {
private:
    vector<ObserverInterface*> observerVector;
    float temperature;
    float humidity;
    float pressure;

public:
    WeatherDataSubject() = default;

    void addObserver(ObserverInterface* observer) override {
        observerVector.push_back(observer);
    }
    void removeObserver(ObserverInterface* observer) override {
        observerVector.erase(
            remove(observerVector.begin(), observerVector.end(), observer),
            observerVector.end()
        );
    }
    void notifyObserver() override{
        for(auto observer: observerVector){
            observer->update(temperature,humidity,pressure);
        }
    }
    void measurementsChanged(){
        notifyObserver();
    }
    void setMeasurements(float temperature, float humidity, float pressure){
        this->temperature=temperature;
        this->pressure=pressure;
        this->humidity=humidity;
        measurementsChanged();
    }
};
