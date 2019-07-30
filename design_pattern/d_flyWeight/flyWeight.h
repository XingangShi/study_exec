#include <string>
#include <list>

typedef std::string sTATE;

class flyWeight
{
    public:
        virtual ~flyWeight(){}

        sTATE getIntrState();
        virtual void operation(sTATE& extrState) = 0;
    protected:
        flyWeight(const sTATE& state)
            : m_state(state)
        {
        }

    private:
        sTATE m_state;
};

class flyWeightFactory
{
    public :
        flyWeightFactory(){}
        ~flyWeightFactory();

        flyWeight* getFlyWeight(const sTATE& key);

    private:
        std::list<flyWeight*> m_listOfFlyWeight;
};

class concreateFlyWeight : public flyWeight
{
    public:
        concreateFlyWeight(const sTATE& state)
            : flyWeight(state)
        {
        }
        virtual ~concreateFlyWeight(){}

        virtual void operation(sTATE& extrState);
};

