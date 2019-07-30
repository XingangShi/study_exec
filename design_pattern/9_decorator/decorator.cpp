#include <iostream>
#include "decorator.h"

decorator::~decorator()
{
    delete m_pComponent;
    m_pComponent = NULL;
}

void conreateComponent::operation()
{
    std::cout << "operation by concreateComponent" << std::endl;
};

void concreateDecorator::operation()
{
    std::cout << "operation by concreateDecorator" << std::endl;
    m_pComponent->operation();
    addBehavior();
}

void concreateDecorator::addBehavior()
{
    std::cout << "addBehavior by concreateDecorator" << std::endl;
}
