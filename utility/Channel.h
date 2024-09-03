#pragma once
#include "Epoll.h"
#include "EventLoop.h"
#include <functional>

class EventLoop;

class Channel
{
private:
    int fd;
    EventLoop* loop;
    std::function<void()> callback;
    
public:
    uint32_t event;
    uint32_t revent;
    bool inEpoll;

    Channel(int fd_ , EventLoop* loop_ ):fd(fd_) , loop(loop_),event(0),revent(0),inEpoll(false){};
    ~Channel();

    int getFd(void);
    void setFd(int fd_);
    EventLoop* getEventLoop( void);
    void setEventLoop(EventLoop* eloop);
    void setCallback(std::function<void()> func);

    void addtoRead(void);
    void handleEvent(void);
};

