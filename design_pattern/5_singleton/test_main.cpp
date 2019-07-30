#include "singlton.h"
#include <iostream>

int main()
{
    //singleton::getInstance().test();
    std::cout << std::endl;
    singleton::ptrGetInstance()->test();
    return 0;
}
