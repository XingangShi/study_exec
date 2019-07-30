#include <iostream>
#include "observer.h"

int main()
{
    observer* p1 = new concreateObserver;
    observer* p2 = new concreateObserver;

    subject* p = new concreateSubject;
    p->attach(p1);
    p->attach(p2);
    p->setState(4);
    p->notify();

    p->detach(p1);
    p->setState(10);
    p->notify();

    delete p;

    return 0;
}
