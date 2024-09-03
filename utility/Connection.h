#pragma once

#include "Epoll.h"
#include "EventLoop.h"
#include "Socket.h"
#include "Channel.h"
#include "Buffer.h"

class Connection
{
private:
    Socket* m_sock;
    EventLoop* loop;
    Channel* m_ch;
    Buffer* buffer;
    std::function<void()> execFunc;
    std::function<void()> deleteFunc;
    void DefaultdeleteFunc(void);
    void DefaultexecFunc(int fd);
    void DefaultexecFuncFormat(void);
public:
    Connection(EventLoop *loop_, Socket* sock_,std::function<void()> dFunc,std::function<void()> eFunc);
    Connection(EventLoop* loop_,Socket* sock_,std::function<void()> dFunc);
    Connection(EventLoop* loop_,Socket* sock_);
    ~Connection();
    Socket* getSocket(void);
    void setexecFunc(std::function<void()> func);
    void setdeleteFunc(std::function<void()> func);
};
