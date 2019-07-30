class singleton
{
    public:
        singleton();
        ~singleton();

        static singleton* ptrGetInstance();
        static singleton  getInstance();

        void test();
    private:
        static singleton* m_pSingletion;
};

