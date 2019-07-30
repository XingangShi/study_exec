#include <iostream>
class game
{
    public:
        game(){}
        virtual ~game()
        {
            std::cout << "~game" << std::endl;
        }
};
class lianLianKan :public game
{
    public:
        lianLianKan();
        virtual ~lianLianKan();
};

class play
{
    public:
        play(){}
        virtual ~play(){}

        void goToPlay();
    protected:
        virtual game* FactoryMethod() = 0;
};

class playGame : public play
{
    public:
        playGame();
        virtual ~playGame();
    protected:
        virtual game* FactoryMethod();
};
