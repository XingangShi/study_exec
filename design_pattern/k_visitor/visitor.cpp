#include "visitor.h"
#include <iostream>

void concreateElementA::accept(visitor& pVisitor)
{
    std::cout << "accept by concreateElementA" << std::endl;
    pVisitor.visitorConcreatElemenA(this);
}
void concreateElementB::accept(visitor& pVisitor)
{
    std::cout << "accept by concreateElementB" << std::endl;
    pVisitor.visitorConcreatElemenB(this);
}

void concreateVisitorA::visitorConcreatElemenA(concreateElementA* pConcreteElentA)
{
    std::cout << "visitorConcreatElemenA by concreateVisitorA" << std::endl;
}
void concreateVisitorA::visitorConcreatElemenB(concreateElementB* pConcreteElentB)
{
    std::cout << "visitorConcreatElemenB by concreateVisitorA" << std::endl;
}

void concreateVisitorB::visitorConcreatElemenA(concreateElementA* pConcreteElentA)
{
    std::cout << "visitorConcreatElemenA by concreateVisitorB" << std::endl;
}
void concreateVisitorB::visitorConcreatElemenB(concreateElementB* pConcreteElentB)
{
    std::cout << "visitorConcreatElemenB by concreateVisitorB" << std::endl;
}
