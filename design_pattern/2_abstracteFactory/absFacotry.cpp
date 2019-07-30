#include <iostream>

#include "absFactory.h"

concreateFacA1::concreateFacA1()
{
    std::cout << "ctor of concreateFacA1" << std::endl;
}
concreateFacA1::~concreateFacA1()
{
    std::cout << "dtor of concreateFacA1" << std::endl;
}

concreateFacA2::concreateFacA2()
{
    std::cout << "ctor of concreateFacA2" << std::endl;
}
concreateFacA2::~concreateFacA2()
{
    std::cout << "dtor of concreateFacA2" << std::endl;
}

concreateFacB1::concreateFacB1()
{
    std::cout << "ctor of concreateFacB1" << std::endl;
}
concreateFacB1::~concreateFacB1()
{
    std::cout << "dtor of concreateFacB1" << std::endl;
}
concreateFacB2::concreateFacB2()
{
    std::cout << "ctor of concreateFacB2" << std::endl;
}
concreateFacB2::~concreateFacB2()
{
    std::cout << "dtor of concreateFacB2" << std::endl;
}

concreateFac1::concreateFac1()
{
    std::cout << "ctor of concreateFac1" << std::endl;
}
concreateFac1::~concreateFac1()
{
    std::cout << "dtor of concreateFac1" << std::endl;
}
absFactoryA * concreateFac1::createFactoryA()
{
    std::cout << "A1 created by concreateFac1" << std::endl;
    return new concreateFacA1();
}
absFactoryB * concreateFac1::createFactoryB()
{
    std::cout << "B1 created by concreateFac1" << std::endl;
    return new concreateFacB1();
}

concreateFac2::concreateFac2()
{
    std::cout << "ctor of concreateFac2" << std::endl;
}
concreateFac2::~concreateFac2()
{
    std::cout << "dtor of concreateFac2" << std::endl;
}
absFactoryA* concreateFac2::createFactoryA()
{
    std::cout << "A2 created by concreateFac2" << std::endl;
    return new concreateFacA2();
}
absFactoryB* concreateFac2::createFactoryB()
{
    std::cout << "B2 created by concreateFac2" << std::endl;
}
