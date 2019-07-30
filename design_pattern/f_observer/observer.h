#include <list>

typedef int t_state;

class observer;

class subject
{
    public:
        subject()
            : m_nSubjectState(-1)
        {
        }

        virtual ~subject();

        void notify();
        void attach(observer* pObserver);
        void detach(observer* pObserver);

        virtual void setState(t_state nState);
        virtual t_state getState();
    protected:
        t_state              m_nSubjectState;
        std::list<observer*> m_listObserver; 
};

class observer
{
    public :
        observer()
            : m_nSubjectState(-1)
        {
        }

        virtual ~observer()
        {
        }

        virtual void update(subject* pSubject) = 0;

    protected:
        t_state m_nSubjectState;
};

class concreateSubject: public subject
{
    public:
        concreateSubject() 
            : subject()
        {
        }

        virtual ~concreateSubject()
        {
        }

        virtual void setState(t_state nState);
        virtual t_state getState();
};

class concreateObserver :public observer
{
    public:
        concreateObserver()
            : observer()
        {
        }

        virtual ~concreateObserver()
        {
        }

        virtual void update(subject* pSubject);
};
