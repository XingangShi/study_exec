class builerBase
{
    public :
        builerBase(){}
        virtual ~builerBase(){}

        //pure virtual func to support create every part of objs
        virtual void createBuilerA() = 0;
        virtual void createBuilerB() = 0;
};

class concreateBuilderA :public builerBase
{
    public :
        concreateBuilderA(){}
        virtual ~concreateBuilderA(){}

        virtual void createBuilerA();
        virtual void createBuilerB();
};
class concreateBuilderB :public builerBase
{
    public :
        concreateBuilderB(){}
        virtual ~concreateBuilderB(){}

        virtual void createBuilerA();
        virtual void createBuilerB();
};

class director
{
    public :
        director(builerBase* pBuilder);
        virtual ~director();

        void construct();
    private:
        builerBase* m_pBuilder;
};
