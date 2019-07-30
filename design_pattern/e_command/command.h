class command
{
    public:
        command(){}
        virtual ~command(){}

        virtual void execute() = 0;
};

class recieve
{
    public:
        void action();
};

class invoke
{
    public:
        invoke(command* pCommand);
        ~invoke();

        void invoker();

    private:
        command* m_pCommand;
};

class concreateCommand :public command
{
    public:
        concreateCommand(recieve* pRecieve);
        virtual ~concreateCommand();

        virtual void execute();

    private:
        recieve* m_pRecieve;
};
