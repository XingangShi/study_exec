#include "memento.h"
#include <iostream>

originator::originator(const t_state& state)
    :m_state(state)
{
}
originator::originator()
{
}
originator::~originator()
{
}
t_state originator::getState()
{
    return m_state;
}
void originator::setState(const t_state& rState)
{
    m_state = rState;
}
memento* originator::createMemento()
{
    return new memento(m_state);
}
void originator::restoreMemonto(memento* pMemonto)
{
    if(NULL != pMemonto)
        m_state = pMemonto->getState();
}
void originator::printState()
{
    std::cout << "State = " << m_state << std::endl;
}
memento::memento(const t_state& rState)
    :m_state(rState)
{
}

void memento::setState(const t_state& state)
{
    m_state = state;
}
t_state memento::getState()
{
    return m_state;
}



