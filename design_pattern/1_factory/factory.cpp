#include "factory.h"
lianLianKan::lianLianKan()
{
    std::cout << "lianLianKan ctor" << std::endl;
}
lianLianKan::~lianLianKan()
{
    std::cout << "lianLianKan dtor" << std::endl;
}

void play::goToPlay()
{
    game* g = FactoryMethod();
    std::cout << "  goToPlay " << std::endl;
}

playGame::playGame()
{
    std::cout << "playGame ctor" << std::endl;
}
playGame::~playGame()
{
    std::cout << "playGame dtor" << std::endl;
}
game* playGame::FactoryMethod()
{
    return new lianLianKan();
}
