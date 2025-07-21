// duck interface
#include <iostream>
#include "flybehavior.h"
#include "quackbehavior.h"
using namespace std;
#pragma once

class Duck
{
public:
    FlyBehavior *flybehavior;
    QuackBehavior *quackbehavior;
    void performefly()
    {
        flybehavior->fly();
    }
    void performeQuck()
    {
        quackbehavior->quack();
    }
    void virtual display() = 0;
    void virtual swim() = 0;
    virtual void setFlyBehavior(FlyBehavior *flybehavior)
    {
        this->flybehavior = flybehavior;
    }
    virtual void setQuckBehavior(QuackBehavior *quackbehavior)
    {
        this->quackbehavior = quackbehavior;
    }
};