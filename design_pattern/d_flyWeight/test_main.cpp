#include "flyWeight.h"

int main()
{
    flyWeightFactory fly;
    fly.getFlyWeight("hello");
    fly.getFlyWeight("world");
    fly.getFlyWeight("hello");
    return 0;
}
