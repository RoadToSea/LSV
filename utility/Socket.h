#pragma once
#include <sys/socket.h>
#include <arpa/inet.h>
#include <sys/unistd.h>
#include <fcntl.h>

#define     MAX_LISTEN    128


class InetAddr
{
public:
    sockaddr_in saddr;
    socklen_t len = sizeof(saddr);

    InetAddr(const char* ip , unsigned port,sa_family_t family=AF_INET)
    {
        saddr.sin_family = family;
        saddr.sin_addr.s_addr = inet_addr(ip);
        saddr.sin_port = htons(port);
    }
    InetAddr()
    {
        saddr.sin_family = AF_INET;
        saddr.sin_port=0;
    }
    void setAddr(const char* ip ,int port , sa_family_t family = AF_INET);
    
};

class Socket
{
private:
    int m_socket=-1;
public:
    Socket();
    Socket(int fd);
    ~Socket();
    
    void sbind(InetAddr* addr);
    void slisten(void);
    int saccept(InetAddr* addr);
    void sconnect(InetAddr* addr);
    int getSocket(void);
    void setNonblock(void);
};



