#pragma once

#include "Epoll.h"
#include "Channel.h"
#include "EventLoop.h"
#include "Socket.h"
#include <functional>



class Acceptor
{
private:
    Socket* m_socket;
    Channel* m_ch;
    EventLoop* m_loop;
    InetAddr* m_addr;
public:
    std::function<void(Socket*)> acceptFunc;
    Acceptor(EventLoop* loop,InetAddr* addr);
    ~Acceptor();
    void acceptConnect(void);
    void setAcceptFunc(std::function<void(Socket*)> func);
};


