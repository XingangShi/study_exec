#include <iostream>
#include "adaptor.h"

void adaptee::specialRequest()
{
    std::cout << "specialRequest of adaptee" << std::endl;
}

adaptor::adaptor(adaptee* padaptee)
    :m_padaptee(padaptee)
{
    std::cout << "ctor of adaptor" << std::endl;
}
adaptor::~adaptor()
{
    std::cout << "dtor of adaptor" << std::endl;
    delete m_padaptee;
    m_padaptee = NULL;
}
void adaptor::request()
{
    std::cout << "request of adaptor" << std::endl;
    m_padaptee->specialRequest();
}
