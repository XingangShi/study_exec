#include <iostream>
#include "templateMethod.h"

void absClass::templateMethod()
{
    primOpr1();
    primOpr2();
}
void conClass::primOpr1()
{
    std::cout << "primOpr1 by conClass" << std::endl;
}
void conClass::primOpr2()
{
    std::cout << "primOpr2 by conClass" << std::endl;
}
