#include "builder.h"
#include <iostream>

void concreateBuilderA::createBuilerA()
{
    std::cout << "A create by concreateBuilderA" << std::endl;
}
void concreateBuilderA::createBuilerB()
{
    std::cout << "B create by concreateBuilderA" << std::endl;
}

void concreateBuilderB::createBuilerA()
{
    std::cout << "A create by concreateBuilderB" << std::endl;
}
void concreateBuilderB::createBuilerB()
{
    std::cout << "B create by concreateBuilderB" << std::endl;
}

director::director(builerBase* pBuilder)
    :m_pBuilder(pBuilder)
{
}
director::~director()
{
    delete m_pBuilder;
    m_pBuilder = NULL;
}
void director::construct()
{
    m_pBuilder->createBuilerA();
    m_pBuilder->createBuilerB();
}
