class absClass
{
    public :
        absClass(){}
        virtual ~absClass(){}

        void templateMethod();
    protected:
        virtual void primOpr1() = 0;
        virtual void primOpr2() = 0;
};

class conClass : public absClass
{
    public :
        conClass(){}
        virtual ~conClass(){}
    protected:
        virtual void primOpr1();
        virtual void primOpr2();
};
