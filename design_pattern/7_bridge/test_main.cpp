#include "bridge.h"
#include <iostream>

abstractor::abstractor(implement* pimpl)
    :m_pimpl(pimpl)
{}
abstractor::~abstractor()
{
    delete m_pimpl;
    m_pimpl = NULL;
}
void abstractor::operation()
{
    m_pimpl->operationimpl();
};

void aImplement::operationimpl()
{
    std::cout << "operationimpl called by aImplement" << std::endl;
}
void bImplement::operationimpl()
{
    std::cout << "operationimpl called by bImplement" << std::endl;
}
