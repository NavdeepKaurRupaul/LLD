//quack concrete class
#include<iostream>
#include "quackbehavior.h"
using namespace std;
class Quack: public QuackBehavior{
    public:
        void quack() override{
            cout<<"i quck"<<endl;
        }
};