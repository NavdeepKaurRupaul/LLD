//quack concrete class
#include<iostream>
#include "quackbehavior.h"
using namespace std;
class NoQuack: public QuackBehavior{
    public:
        void quack() override{
            cout<<"i no quck"<<endl;
        }
};