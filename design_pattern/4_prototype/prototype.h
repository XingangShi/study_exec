class baseOfprototype
{
    public:
        baseOfprototype(){}
        virtual ~baseOfprototype(){}

        virtual baseOfprototype* clone() = 0;
};

class aOfprototype :public baseOfprototype
{
    public:
        aOfprototype();
        aOfprototype(const aOfprototype&); 
        virtual ~aOfprototype();

        virtual baseOfprototype* clone();
};

class bOfprototype :public baseOfprototype
{
    public :
        bOfprototype();
        bOfprototype(const bOfprototype&);
        virtual ~bOfprototype();

        virtual baseOfprototype* clone();
};
