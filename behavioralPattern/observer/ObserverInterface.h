#pragma once
class ObserverInterface{
    public:
        virtual void update(float temp, float humidity, float pressure)=0;
};