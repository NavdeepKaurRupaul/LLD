#pragma once
#include<string>
using namespace std;
#include "BeverageInterface.h"

class HouseBlend:public BeverageInterface{
    public:
        HouseBlend(){
            this->description="House Blend";
        }
        double cost() override{
            return 0.89;
        }
};