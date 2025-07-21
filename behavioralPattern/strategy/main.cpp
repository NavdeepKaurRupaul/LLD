#include<iostream>
#include "rubberduck.h"
#include "duck.h"
#include "modelduck.h"
#include "nofly.h"
#include "noquack.h"
using namespace std;

int main(){
    Duck* myduck = new RubberDuck();
    myduck->display();
    myduck->swim();
    myduck->performefly();
    myduck->performeQuck();

    //run time poly
    Duck* modelduck = new ModelDuck();
    modelduck->display();
    modelduck->swim();
    modelduck->performefly();
    modelduck->performeQuck();
    modelduck->setFlyBehavior(new NoFly());
    modelduck->setQuckBehavior(new NoQuack());
    modelduck->performefly();
    modelduck->performeQuck();
    return 0;
}