#include <iostream>
#include "proxy.h"

void realSubject::request()
{
    std::cout << "request by realSubject" << std::endl;
}

proxy::proxy()
    :m_pRealSubject(NULL)
{
}
proxy::~proxy()
{
    delete m_pRealSubject;
    m_pRealSubject = NULL;
}
void proxy::request()
{
    if (NULL == m_pRealSubject)
    {
        std::cout << "request by proxy" << std::endl;
        m_pRealSubject = new realSubject();
    }
    m_pRealSubject->request();
}
