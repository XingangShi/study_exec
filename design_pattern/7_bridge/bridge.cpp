#include "bridge.h"
#include <iostream>
int main()
{
    implement* pa = new aImplement();
    abstractor* ppa = new abstractor(pa);
    ppa->operation();

    implement* pb = new bImplement();
    abstractor* ppb = new abstractor(pb);
    ppb->operation();

    return 0;
}

