#include "state.h"
#include <iostream>

context::context(state* pState)
    :m_pState(pState)
{
}
context::~context()
{
    delete m_pState;
    m_pState = NULL;
}
void context::request()
{
    if (NULL != m_pState)
        m_pState->handle(this);
}
void context::changeState(state* pState)
{
    if (NULL != m_pState)
    {
        delete m_pState;
        m_pState = NULL;
    }
    m_pState = pState;
}

void concreateStateA::handle(context* pContext)
{
    std::cout << "handle by concreateStateA" << std::endl;
    if (pContext != NULL)
        pContext->changeState(new concreateStateB());
}

void concreateStateB::handle(context* pContext)
{
    std::cout << "handle by concreateStateB" << std::endl;
    if (pContext != NULL)
        pContext->changeState(new concreateStateA());
}
