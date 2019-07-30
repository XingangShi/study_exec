class target
{
    public:
        target(){}
        virtual ~target(){}

        virtual void request() = 0;
};

class adaptee
{
    public:
        adaptee(){}
        ~adaptee(){}

        void specialRequest();
};

class adaptor :public target
{
    public :
        adaptor(adaptee* padaptee);
        virtual ~adaptor();

        virtual void request();
    private:
        adaptee* m_padaptee;
};
