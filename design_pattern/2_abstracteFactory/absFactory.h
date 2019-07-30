class absFactoryA
{
    public:
        absFactoryA(){}
        virtual ~absFactoryA(){}
};
class concreateFacA1 :public absFactoryA
{
    public:
        concreateFacA1();
        virtual ~concreateFacA1();
};
class concreateFacA2 :public absFactoryA
{
    public:
        concreateFacA2();
        virtual ~concreateFacA2();
};

class absFactoryB
{
    public:
        absFactoryB(){}
        virtual ~absFactoryB(){};
};
class concreateFacB1 :public absFactoryB
{
    public:
        concreateFacB1();
        virtual ~concreateFacB1();
};
class concreateFacB2 :public absFactoryB
{
    public:
        concreateFacB2();
        virtual ~concreateFacB2();
};

class absFactory
{
    public :
        absFactory(){}
        virtual ~absFactory(){}

        virtual absFactoryA* createFactoryA() = 0;
        virtual absFactoryB* createFactoryB() = 0;
};

class concreateFac1 :public absFactory
{
    public:
        concreateFac1();
        virtual ~concreateFac1();

        virtual absFactoryA* createFactoryA();
        virtual absFactoryB* createFactoryB();
};
class concreateFac2 :public absFactory
{
    public:
        concreateFac2();
        virtual ~concreateFac2();

        virtual absFactoryA* createFactoryA();
        virtual absFactoryB* createFactoryB();
};
