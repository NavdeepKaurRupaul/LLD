#pragma once
#include<string>
using namespace std;

class BeverageInterface{
    public:
        string description;
        virtual string getDescription(){
            return description;
        }
        virtual double cost()=0;
};