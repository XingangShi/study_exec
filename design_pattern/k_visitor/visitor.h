class visitor;

class element
{
    public :
        virtual ~element(){}
        virtual void accept(visitor& pVisitor) = 0;

    protected:
        element(){}
};

class concreateElementA :public element
{
    public:
        virtual ~concreateElementA(){}
        virtual void accept(visitor& pVisitor);
};
class concreateElementB :public element
{
    public:
        virtual ~concreateElementB(){}
        virtual void accept(visitor& pVisitor);
};

class visitor
{
    public:
        virtual ~visitor(){}

        virtual void visitorConcreatElemenA(concreateElementA* pConcreteElentA) = 0;
        virtual void visitorConcreatElemenB(concreateElementB* pConcreteElentB) = 0;
};

class concreateVisitorA : public visitor
{
    public:
        virtual ~concreateVisitorA(){}

        virtual void visitorConcreatElemenA(concreateElementA* pConcreteElentA);
        virtual void visitorConcreatElemenB(concreateElementB* pConcreteElentB);
};

class concreateVisitorB :public visitor
{
    public :
        virtual ~concreateVisitorB(){}

        virtual void visitorConcreatElemenA(concreateElementA* pConcreteElentA);
        virtual void visitorConcreatElemenB(concreateElementB* pConcreteElentB);
};
