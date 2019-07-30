#include <iostream>
#include "prototype.h"

aOfprototype::aOfprototype()
{
    std::cout << "ctor aOfprototype" << std::endl;
}
aOfprototype::aOfprototype(const aOfprototype&)
{
    std::cout << "copy ctor aOfprototype" << std::endl;
}
aOfprototype::~aOfprototype()
{
    std::cout << "dtor aOfprototype" << std::endl;
}
baseOfprototype* aOfprototype::clone()
{
    return new aOfprototype(*this);
}

bOfprototype::bOfprototype()
{
    std::cout << "ctor bOfprototype" << std::endl;
}
bOfprototype::bOfprototype(const bOfprototype&)
{
    std::cout << "copy ctor bOfprototype" << std::endl;
}
bOfprototype::~bOfprototype()
{
    std::cout << "dtor bOfprototype" << std::endl;
}
baseOfprototype* bOfprototype::clone()
{
    return new bOfprototype(*this);
}
