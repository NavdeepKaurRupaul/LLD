#include<iostream>
#include "duck.h"
#include "quack.h"
#include "fly.h"
using namespace std;

class RubberDuck: public Duck{
    public:
        RubberDuck(){
            this->flybehavior = new Fly();
            this->quackbehavior = new Quack();
        }
        void display() override{
            cout<<"hello i RubberDuck"<<endl;
        }
        void swim() override{
            cout<<"i can swim RubberDuck"<<endl;
        }
};