#include "iterator.h"
#include <iostream>

concreateAggregate::concreateAggregate(int nSize)
    :m_nSize(nSize), m_pData(NULL)
{
    m_pData = new t_data[m_nSize];
    for (int i = 0; i < m_nSize; ++i)
        m_pData[i] = i;
}

concreateAggregate::~concreateAggregate()
{
    delete[] m_pData;
    m_pData = NULL;
}

Iterator* concreateAggregate::createIterator(aggregate* pAggregate)
{
    return new concreateIterator(this);
}
int concreateAggregate::getSize()
{
    return m_nSize;
}
t_data concreateAggregate::getItem(int index)
{
    if (index < m_nSize)
        return m_pData[index];
    else
        return -1;
}

concreateIterator::concreateIterator(aggregate* pAggregate)
    :m_pConcreateAggregate(pAggregate), m_index(0)
{
}
void concreateIterator::first()
{
    m_index = 0;
}
void concreateIterator::next()
{
    if (m_index < m_pConcreateAggregate->getSize())
        ++m_index;
}
bool concreateIterator::isDone()
{
    return m_index == m_pConcreateAggregate->getSize();
}
bool concreateIterator::currentItem()
{
    return m_pConcreateAggregate->getItem(m_index);
}
