#include "Acceptor.h"
#include "../server/serverBase.h"

Acceptor::Acceptor(EventLoop *loop,InetAddr* addr):m_loop(loop), m_addr(addr)
{
    m_socket = new Socket();
    m_socket->sbind(addr);
    m_socket->slisten();
    m_socket->setNonblock();
    m_ch = new Channel(m_socket->getSocket(),m_loop);
    std::function<void()> func = std::bind(&Acceptor::acceptConnect,this);
    m_ch->setCallback(func);
    m_ch->addtoRead();

}

Acceptor::~Acceptor()
{
    delete m_socket;
    delete m_ch;
    delete m_addr;
}

void Acceptor::acceptConnect(void)
{
    // Correctly binding Response if it directly accepts Socket* as an argument.
    std::function<void(Socket*)> func = std::bind(&serverBase::acceptConnect, this, std::placeholders::_1);

    func(m_socket);
}

void Acceptor::setAcceptFunc(std::function<void(Socket *)> func)
{
    acceptFunc = func;
}
