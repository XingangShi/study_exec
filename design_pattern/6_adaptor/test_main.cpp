#include <iostream>
#include "adaptor.h"

int main()
{
    adaptee* pade = new adaptee;
    target* pt = new adaptor(pade);
    pt->request();

    delete pt;

    return 0;
}
