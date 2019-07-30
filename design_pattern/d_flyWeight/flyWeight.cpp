#include "flyWeight.h"
#include <iostream>

inline sTATE flyWeight::getIntrState()
{
    return m_state;
}

flyWeightFactory::~flyWeightFactory()
{
    std::list<flyWeight*>::iterator temp;
    for (std::list<flyWeight*>::iterator it = m_listOfFlyWeight.begin();
            it != m_listOfFlyWeight.end(); ++it)
    {
        temp = it;
        delete(*temp);
    }
    m_listOfFlyWeight.clear();
}


flyWeight* flyWeightFactory::getFlyWeight(const sTATE& key)
{
    for (std::list<flyWeight*>::iterator it = m_listOfFlyWeight.begin();
            it != m_listOfFlyWeight.end(); ++it)
        if ((*it)->getIntrState() == key)
        {
            std::cout << "The flyWeight key is : " << key  << " already exist!" << std::endl;
            return (*it);
        }
    std::cout << "Create a new flyWeight, key : " << key << std::endl;
    flyWeight* flyweight = new concreateFlyWeight(key);
    m_listOfFlyWeight.push_back(flyweight);

    return flyweight;
}
   
void concreateFlyWeight::operation(sTATE& state)
{
    std::cout << "operation is by concreateFlyWeight " << std::endl;
}


