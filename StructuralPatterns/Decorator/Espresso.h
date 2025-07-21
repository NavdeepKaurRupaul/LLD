#pragma once
#include<string>
using namespace std;
#include "BeverageInterface.h"

class Espresso : public BeverageInterface{
    public:
        Espresso(){
            this->description = "Espresso";
        }
        double cost() override{
            return 1.99;
        }
};