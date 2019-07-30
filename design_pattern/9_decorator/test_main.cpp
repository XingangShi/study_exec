#include <iostream>
#include "decorator.h"

int main()
{
    component* pC = new conreateComponent();
    std::cout << std::endl;

    decorator* pD = new concreateDecorator(pC);

    pD->operation();

    delete pD;
    return 0;
}
