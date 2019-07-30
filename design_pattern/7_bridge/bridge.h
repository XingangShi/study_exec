class implement;

class abstractor
{
    public:
        abstractor(implement* pimpl);
        virtual ~abstractor();
        
        void operation();
    private:
        implement* m_pimpl;
};

class implement
{
    public:
        implement(){}
        virtual ~implement(){}

        virtual void operationimpl() = 0;
};

class aImplement :public implement
{
    public :
        aImplement(){}
        virtual ~aImplement(){};

        virtual void operationimpl();
};

class bImplement :public implement
{
    public :
        bImplement(){}
        virtual ~bImplement(){}

        virtual void operationimpl();
};
