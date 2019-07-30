#include "state.h"

int main()
{
    state* ps = new concreateStateA();
    context* pc = new context(ps);

    pc->request();
    pc->request();
    pc->request();

    delete pc;
    return 0;
}
