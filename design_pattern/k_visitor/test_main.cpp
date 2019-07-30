#include "visitor.h"

int main()
{
    visitor* pa = new concreateVisitorA();
    element* pe = new concreateElementB();

    pe->accept(*pa);

    delete pa;
    delete pe;
    return 0;
}
