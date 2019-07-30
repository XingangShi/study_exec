#include <iostream>
#include <algorithm>

#include "observer.h"

void subject::attach(observer* pObserver)
{
    std::cout << "Attach an observer" << std::endl;

    m_listObserver.push_back(pObserver);
}

void subject::detach(observer* pObserver)
{
    std::list<observer*>::iterator it;
    it = std::find(m_listObserver.begin(), m_listObserver.end(), pObserver);
    if (m_listObserver.end() != it)
        m_listObserver.erase(it);

    std::cout << "Detach an Observern" << std::endl;
}

void subject::notify()
{
    std::cout << "Notify observer's state" << std::endl;
    std::list<observer*>::iterator it;
    for (it = m_listObserver.begin(); it != m_listObserver.end(); ++it)
        (*it)->update(this);
}

void subject::setState(t_state nState)
{
    std::cout << "setState by subjectn" << std::endl;
    m_nSubjectState = nState;
}

t_state subject::getState()
{
    std::cout << "getState bu subjectn" << std::endl;
    return m_nSubjectState;
}

subject::~subject()
{
    std::list<observer*>::iterator iter1, temp;
    for (iter1 = m_listObserver.begin();
            iter1 != m_listObserver.end(); ++iter1)
    {
        temp = iter1;
        delete(*temp);
    }
    m_listObserver.clear();
}

void concreateSubject::setState(t_state nState)
{
    std::cout << "setState by concreateSubject" << std::endl;
    m_nSubjectState = nState;
}

t_state concreateSubject::getState()
{
    std::cout << "getState by concreateSubject" << std::endl;
    return m_nSubjectState;
}

void concreateObserver::update(subject* pSubject)
{
    if (pSubject == NULL)
        return ;
    m_nSubjectState = pSubject->getState();
    std::cout << "The observerState is " << m_nSubjectState << std::endl;
}
