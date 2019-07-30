#include "proxy.h"

int main()
{
    subject* ps = new proxy();

    ps->request();

    delete ps;

    return 0;
}
