#include <iostream>
#include "composite.h"
int main()
{

    leaf* l1 = new leaf();
    leaf* l2 = new leaf();

    composite* pcomposite = new composite;

    pcomposite->add(l1);
    pcomposite->add(l2);
    pcomposite->operation();
    pcomposite->getChild(1)->operation();

    delete pcomposite;

    return 0;
}
