#include<iostream>
#include "duck.h"
using namespace std;

class ModelDuck: public Duck{
    public:
        ModelDuck(){
            this->flybehavior = new Fly();
            this->quackbehavior = new Quack();
        }
        void display() override{
            cout<<"i Model duck"<<endl;
        }
        void swim() override{
            cout<<"i swim Model Duck"<<endl;
        }
};
