//quack concrete class
#include<iostream>
#include "flybehavior.h"
using namespace std;
class NoFly: public FlyBehavior{
    public:
        void fly() override{
            cout<<"i no fly"<<endl;
        }
};