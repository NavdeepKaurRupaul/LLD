#pragma once
#include<string>
using namespace std;
#include "CondimentDecoratorInterface.h"

class WhipCondiment : public CondimentDecoratorInterface{
    public:
        WhipCondiment(BeverageInterface* beverage){
            this->beverageInterface=beverage;
        }
        string getDescription(){
            return this->beverageInterface->getDescription() + ", Mocha";
        }
        double cost(){
            return this->beverageInterface->cost() + 0.20;
        }
};