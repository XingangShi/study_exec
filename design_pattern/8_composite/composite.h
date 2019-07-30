#include <list>
class compont
{
    public :
        compont(){}
        virtual ~compont(){}

        virtual void operation() = 0;

        virtual void add(compont* child);
        virtual void remove(compont* child);
        virtual compont* getChild(int index);
};

class leaf :public compont
{
    public:
        leaf(){}
        virtual ~leaf(){}

        virtual void operation();
};

class composite :public compont
{
    public:
        composite(){}
        virtual ~composite();

        virtual void operation();

        virtual void add(compont* child);
        virtual void remove(compont* child);
        virtual compont* getChild(int index);
    private:
        std::list<compont*> m_listOfCompont;
};

