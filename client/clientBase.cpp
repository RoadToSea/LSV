#include "clientBase.h"


void clientBase::startConnect(const char *ip, int port)
{
    addr.setAddr(ip,port);
    m_socket.sconnect(&addr);

    std::cout<<"connect success"<<std::endl;
}

void clientBase::startConnect()
{
    if(addr.saddr.sin_port!=0)
    {
        m_socket.sconnect(&addr);
        std::cout<<"connect susccess"<<std::endl;
    }
    else
        LOG(Log_Level::ERROR_,"InetAddr is not inited");
}


void clientBase::sendFunc(void)
{
    while(1)
    {
        memset(sendBuf,0,sizeof(sendBuf));
        std::cin>>sendBuf;
        send(m_socket.getSocket(),sendBuf,sizeof(sendBuf),0);
        std::cout<<"your input "<<sendBuf<<std::endl;
    }
}

void clientBase::recvFunc(void)
{
    while(1)
    {
        memset(recvBuf,0,sizeof(recvBuf));
        int recvRet = recv(m_socket.getSocket(),recvBuf,sizeof(recvBuf),0);
        if(recvRet>0)
            std::cout<<"receive info :"<<recvBuf<<std::endl;
    }
}

void clientBase::cliLaunch(const char* ip ,int port)
{
    startConnect(ip,port);
    std::thread cSend(&clientBase::sendFunc,this);
    std::thread cRecv(&clientBase::recvFunc,this);

    cSend.join();
    cRecv.join();
}

clientBase::clientBase(const char *ip, int port)
{
    addr.setAddr(ip,port);
}

void clientBase::setAddr(const char *ip, int port, sa_family_t family)
{
   addr.setAddr(ip,port,family);
}
