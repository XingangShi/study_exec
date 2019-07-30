#include <string>

typedef std::string t_state;

class memento;

class originator
{
    public:
        originator(const t_state& state);
        originator();
        ~originator();

        memento* createMemento();
        void     setMemonto(const memento* pMemonto);
        t_state  getState();
        void     setState(const t_state& rState);
        void     restoreMemonto(memento* pMemonto);
        void     printState();
    private:
        t_state  m_state;
};

class memento
{
    private:
        friend class originator;

        memento(const t_state& rState);
        void  setState(const t_state& state);
        t_state getState();

        t_state m_state;
};
