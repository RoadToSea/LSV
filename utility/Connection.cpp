#include "Connection.h"
#include <functional>

Connection::~Connection()
{
    deleteFunc();
}

Connection::Connection(EventLoop *loop_, Socket *sock_, std::function<void()> dFunc)
:loop(loop_),m_sock(sock_),deleteFunc(dFunc)
{
    buffer = new Buffer();
    m_ch = new Channel(m_sock->getSocket(),loop);
    execFunc = std::bind(&Connection::DefaultexecFuncFormat,this);
    m_ch->setCallback(execFunc);
    m_ch->addtoRead(); 
}

Connection::Connection(EventLoop *loop_, Socket *sock_)
:loop(loop_),m_sock(sock_)
{
    buffer = new Buffer();
    m_ch = new Channel(m_sock->getSocket(),loop);
    execFunc = std::bind(&Connection::DefaultexecFuncFormat,this);
    m_ch->setCallback(execFunc);
    deleteFunc = std::bind(&Connection::DefaultdeleteFunc,this);
    m_ch->addtoRead();  
}

Connection::Connection(EventLoop *loop_, Socket *sock_,std::function<void()> dFunc,std::function<void()> eFunc)
:loop(loop_),m_sock(sock_),execFunc(eFunc),deleteFunc(dFunc)
{
    buffer = new Buffer();
    m_ch = new Channel(m_sock->getSocket(),loop);
    m_ch->setCallback(eFunc);
    m_ch->addtoRead(); 
}

void Connection::setexecFunc(std::function<void()> func)
{
    execFunc = func;
}

void Connection::setdeleteFunc(std::function<void()> func)
{
    deleteFunc = func;
}

void Connection::DefaultdeleteFunc(void)
{
    delete m_sock;
    delete m_ch;
    delete buffer;
}

void Connection::DefaultexecFuncFormat(void)
{
    DefaultexecFunc(m_sock->getSocket());
}

void Connection::DefaultexecFunc(int fd)
{
    char buf[1024]={0};
    while(1)
    {
        int recvLen = recv(fd,buf,sizeof(buf),MSG_DONTWAIT);
        if(recvLen>0)
        {
            std::cout<<"receive info :"<<buf<<std::endl;
            buffer->append(buf);
            send(fd,buffer->getCstr(),sizeof(buf),0);
        }
        //系统中断
        else if(recvLen==-1&&errno==EINTR)
        {
            std::cout<<"continue reading"<<std::endl;
            continue;
        }
        //读取完毕
        else if(recvLen==-1&&((errno==EAGAIN)||(errno==EWOULDBLOCK)))
        {
            std::cout<<"read over"<<std::endl;
            break;
        }
        else if(recvLen==0)
        {
            std::cout<<"client disconnect "<<std::endl;
            buffer->clear();
            close(fd);
            break;
        }
    }
}

Socket *Connection::getSocket(void)
{
    return m_sock;
}


