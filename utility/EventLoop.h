#pragma once

#include "Epoll.h"
#include "Channel.h"

class Epoll;
class Channel;

class EventLoop
{
private:
    Epoll* ep;
    bool isquit;
public:
    EventLoop(/* args */);
    EventLoop(Epoll* ep_):ep(ep_),isquit(false){};
    ~EventLoop();

    void loop(void);
    void addChannel(Channel* ch);
    Epoll* getEpoll(void);
};


