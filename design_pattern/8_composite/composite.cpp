#include <iostream>
#include <algorithm>
#include "composite.h"

void compont::add(compont* child)
{
}
void compont::remove(compont* child)
{
}
compont* compont::getChild(int index)
{
    return NULL;
}

void leaf::operation()
{
    std::cout << "operation by leaf" << std::endl;
}


composite::~composite()
{
    std::list<compont*>::const_iterator temp;
    for (std::list<compont*>::const_iterator iter = m_listOfCompont.begin();
            iter != m_listOfCompont.end(); ++iter)
    {
        temp = iter;
        delete (*temp);
    }
}
void composite::add(compont* child)
{
    m_listOfCompont.push_back(child);
}
void composite::remove(compont* child)
{
    std::list<compont*>::iterator ite;
    ite = std::find(m_listOfCompont.begin(), m_listOfCompont.end(), child);
    if (m_listOfCompont.end() != ite)
        m_listOfCompont.erase(ite);
}
compont* composite::getChild(int index)
{
    if (index < 0 || index > m_listOfCompont.size())
        return NULL;
    int i = 0;
    std::list<compont*>::const_iterator iter; 
    for (iter = m_listOfCompont.begin();
            iter != m_listOfCompont.end(); ++iter)
    {
        if ( i == index)
            break;
        ++i;
    }
    return (*iter);
}

void composite::operation()
{
    std::cout << "operation by composite" << std::endl;

    for (std::list<compont*>::iterator iter = m_listOfCompont.begin();
            iter != m_listOfCompont.end(); ++iter)
        (*iter)->operation();
}
