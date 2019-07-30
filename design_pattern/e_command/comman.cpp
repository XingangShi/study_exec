#include "command.h"
#include <iostream>

void recieve::action()
{
    std::cout << "action of recieve" << std::endl;
}


invoke::invoke(command* pCommand)
    :m_pCommand(pCommand)
{
}

invoke::~invoke()
{
    delete m_pCommand;
    m_pCommand = NULL;
}

void invoke::invoker()
{
    if (m_pCommand != NULL)
        m_pCommand->execute();
}

concreateCommand::concreateCommand(recieve* pRecieve)
    :m_pRecieve(pRecieve)
{
}

concreateCommand::~concreateCommand()
{
    delete m_pRecieve;
    m_pRecieve = NULL;
}

void concreateCommand::execute()
{
    if (m_pRecieve != NULL)
        m_pRecieve->action();

    std::cout << "execute by concreateCommand" << std::endl;
}
