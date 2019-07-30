#include "iterator.h"
#include <iostream>

int main()
{
    aggregate* pa = new concreateAggregate(8);
    Iterator* pi = new concreateIterator(pa);

    for (;false == pi->isDone(); pi->next())
        std::cout << pi->currentItem() << std::endl;
    return 0;
}
