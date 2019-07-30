#include <iostream>
#include "singlton.h"

singleton* singleton::m_pSingletion = NULL;
singleton::singleton()
{
    std::cout << "ctor singleton" << std::endl;
}
singleton::~singleton()
{
    std::cout << "dtor singleton" << std::endl;
}
singleton* singleton::ptrGetInstance()
{
    if (m_pSingletion == NULL)
        m_pSingletion = new singleton();
    return m_pSingletion;
}
singleton singleton::getInstance()
{
    return *ptrGetInstance();
}
void singleton::test()
{
    std::cout << "test ! " << std::endl;
}


