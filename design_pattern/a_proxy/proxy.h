class subject
{
    public:
        subject(){}
        virtual ~subject(){}

        virtual void request() = 0;
};

class realSubject :public subject
{
    public :
        realSubject(){}
        virtual ~realSubject(){}

        virtual void request();
};

class proxy : public subject
{
    public :
        proxy();
        virtual ~proxy();

        virtual void request();
    private:
        realSubject* m_pRealSubject;
};

