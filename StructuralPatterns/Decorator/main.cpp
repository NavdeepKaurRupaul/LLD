#include<iostream>
using namespace std;
#include "CondimentDecoratorInterface.h"
#include "BeverageInterface.h"
#include "Espresso.h"
#include "HouseBlend.h"
#include "MochaCondiment.h"

int main(){
    BeverageInterface* myBeverage1 = new Espresso();

    cout<<myBeverage1->getDescription()<<" Cost: $"<<myBeverage1->cost();

    BeverageInterface* myBeverage2 = new HouseBlend();
    myBeverage2 = new MochaCondiment(myBeverage2);
    cout<<endl;
    cout<<myBeverage2->getDescription()<<" Cost: $"<<myBeverage2->cost();
    return 0;
}