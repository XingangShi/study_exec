class component
{
    public:
        component(){}
        virtual ~component(){}

        virtual void operation() = 0;
};

class decorator: public component
{
    public :
        decorator(component* pComponent)
            :m_pComponent(pComponent)
        {
        }
        virtual ~decorator();

    protected:
        component* m_pComponent;
};

class conreateComponent :public component
{
    public:
        conreateComponent(){}
        virtual ~conreateComponent(){}

        virtual void operation();
};

class concreateDecorator :public decorator
{
    public:
        concreateDecorator(component* pComponent)
            : decorator(pComponent)
        {
        }

        virtual ~concreateDecorator(){}

        virtual void operation();

    private:
        void addBehavior();
};
