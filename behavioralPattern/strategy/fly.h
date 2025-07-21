//quack concrete class
#include<iostream>
#include "flybehavior.h"
using namespace std;
class Fly: public FlyBehavior{
    public:
        void fly() override{
            cout<<"i fly"<<endl;
        }
};