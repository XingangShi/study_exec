typedef int t_data;

class Iterator;

class aggregate
{
    public:
        virtual ~aggregate(){}

        virtual Iterator* createIterator(aggregate* pAggregate) = 0;
        virtual int getSize() = 0;
        virtual t_data getItem(int index) = 0;
};

class Iterator
{
    public:
        virtual ~Iterator(){}
        virtual void first() = 0;
        virtual void next() = 0; 
        virtual bool isDone() = 0;
        virtual bool currentItem() = 0;
};

class concreateAggregate : public aggregate
{
    public:
        concreateAggregate(int nSize);
        virtual ~concreateAggregate();

        virtual Iterator* createIterator(aggregate* pAggregate);
        virtual int getSize();
        virtual t_data getItem(int index);

    private:
        int     m_nSize;
        t_data* m_pData;
};

class concreateIterator : public Iterator
{
    public:
        concreateIterator(aggregate* pAggregate);
        virtual ~concreateIterator(){}

        virtual void first();
        virtual void next();
        virtual bool isDone();
        virtual bool currentItem();

    private:
        aggregate* m_pConcreateAggregate;
        int        m_index;
};
