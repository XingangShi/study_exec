class state;

class context
{
    public:
        context(state* pState);
        ~context();

        void request();
        void changeState(state* pState);
    private:
        state* m_pState;
};

class state
{
    public:
        virtual ~state(){}

        virtual void handle(context* pContext) = 0;
};

class concreateStateA :public state
{
    public:
        virtual void handle(context* pContext);
};

class concreateStateB :public state
{
    public:
        virtual void handle(context* pContext);
};
