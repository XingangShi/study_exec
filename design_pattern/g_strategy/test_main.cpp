#include "strategy.h"

int main()
{
    strategy* ps = new concreateStrategyA();

    context* pc = new context(ps);

    pc->contextInterface();

    delete pc;
    
    return 0;
}

