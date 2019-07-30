class strategy;

class context
{
    public:
        context(strategy* pStrategy);
        ~context();

        void contextInterface();

    private:
        strategy* m_pStrategy;
};

class strategy
{
    public:
        virtual ~strategy(){}
        virtual void algorithemInterface() = 0;
};

class concreateStrategyA : public strategy
{
    public:
        virtual ~concreateStrategyA(){};

        virtual void algorithemInterface();
};
