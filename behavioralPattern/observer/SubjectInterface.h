#pragma once
class SubjectInterface{
    public:
        virtual void addObserver(ObserverInterface* observer)=0;
        virtual void removeObserver(ObserverInterface* observer)=0;
        virtual void notifyObserver()=0;
};