#include "command.h"
#include <iostream>
int main()
{
    recieve* pRecieve = new recieve();
    command* pCommand = new concreateCommand(pRecieve);
    invoke*  pInvoke = new invoke(pCommand);

    pInvoke->invoker();

    delete pInvoke;
    return 0;
}
