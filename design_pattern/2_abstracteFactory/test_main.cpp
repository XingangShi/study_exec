#include <iostream>
#include "absFactory.h"
int main()
{
    absFactory* F1 = new concreateFac1();
    F1->createFactoryA();
    F1->createFactoryB();

    std::cout << std::endl;

    absFactory* F2 = new concreateFac2();
    F2->createFactoryA();
    F2->createFactoryB();

    std::cout << std::endl;

    delete F1;
    delete F2;

    return 0;
}
