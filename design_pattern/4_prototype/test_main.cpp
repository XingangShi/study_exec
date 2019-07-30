#include <iostream>
#include "prototype.h"

int main()
{
    baseOfprototype* b1 = new aOfprototype();
    baseOfprototype* b2 = b1->clone();
    
    std::cout << std::endl;

    baseOfprototype* b3 = new bOfprototype();
    baseOfprototype* b4 = b3->clone();

    std::cout << std::endl;

    delete b1;
    delete b2;
    delete b3;
    delete b4;
    return 0;
}
