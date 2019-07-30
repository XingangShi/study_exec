#include "strategy.h"

#include <iostream>

context::context(strategy* pStrategy)
    : m_pStrategy(pStrategy)
{
}
context::~context()
{
    delete m_pStrategy;
    m_pStrategy = NULL;
}
void context::contextInterface()
{
    if (m_pStrategy != NULL)
        m_pStrategy->algorithemInterface();
}

void concreateStrategyA::algorithemInterface()
{
    std::cout << "algorithemInterface by concreateStrategyA" << std::endl;
}

