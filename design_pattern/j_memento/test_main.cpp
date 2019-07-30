#include "memento.h"
#include <iostream>

int main()
{
    originator* po = new originator("old state");
    po->printState();

    memento *pMemonto = po->createMemento();

    po->setState("new state");
    po->printState();

    po->restoreMemonto(pMemonto);
    po->printState();

    delete po;
    delete pMemonto;
    return 0;
}
