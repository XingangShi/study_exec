#include <iostream>
#include "builder.h"
int main()
{

#ifdef BUILDERB
    builerBase* b1 = new concreateBuilderB();
#elif BUILDERA 
    builerBase* b1 = new concreateBuilderA();
#else
    builerBase* b1 = new concreateBuilderA();
#endif
    director* pb1 = new director(b1);
    pb1->construct();

    return 0;
}

