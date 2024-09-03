#include "Socket.h"
#include "Log.h"

Socket::Socket(/* args */):m_socket(-1)
{
    m_socket = socket(AF_INET,SOCK_STREAM,0);
    Lerror(m_socket==-1,"socket create error");
}

Socket::Socket(int fd):m_socket(fd)
{
    Lerror(fd==-1,"socket create error");
}

Socket::~Socket()
{
    if(m_socket!=-1)
    {
        close(m_socket);
    }
}

void Socket::sbind(InetAddr* addr)
{
    int bindRet = bind(m_socket,(const sockaddr*)&addr->saddr,sizeof(addr->saddr));
    Lerror(bindRet == -1 , "bind func error");
}

void Socket::slisten()
{
    int listenRet = listen(m_socket,MAX_LISTEN);
    Lerror(listenRet==-1,"listen func error");
}

int Socket::saccept(InetAddr *addr)
{
    socklen_t size = sizeof(addr->saddr);
    int fd = accept(m_socket,(sockaddr*)&addr->saddr,&size);
    Lerror(fd==-1 ,"accept func error");
    return fd;
}

int Socket::getSocket(void)
{
    return m_socket;
}

void Socket::sconnect(InetAddr *addr)
{
    socklen_t len = sizeof(addr->saddr);
    int conRet = connect(m_socket,(const sockaddr*)&addr->saddr,len);
    Lerror(conRet == -1, "connect func error");
}

void InetAddr::setAddr(const char *ip, int port, sa_family_t family)
{
    saddr.sin_addr.s_addr = inet_addr(ip);
    saddr.sin_port = htons(port);
    saddr.sin_family = family;
}

void Socket::setNonblock(void)
{
    fcntl(m_socket,F_SETFL,O_NONBLOCK|fcntl(m_socket,F_GETFL));
}
