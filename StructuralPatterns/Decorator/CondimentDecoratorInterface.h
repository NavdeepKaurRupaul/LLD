#pragma once
#include<string>
using namespace std;
#include "BeverageInterface.h"

class CondimentDecoratorInterface: public BeverageInterface{
    public:
        BeverageInterface* beverageInterface;
        virtual string getDescription()=0;
};
