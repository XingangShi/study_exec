#include <iostream>
#include "chainOfResponsiblity.h"

int main()
{
    handler* p1 = new firstConcreatHandler();
    handler* p2 = new secondConcreateHandler();

    p2->handlerRequest();

    delete p2;
}
