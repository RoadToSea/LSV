#include "EventLoop.h"
#include <vector>
#include "Channel.h"

EventLoop::EventLoop(/* args */):ep(nullptr),isquit(false)
{
    ep = new Epoll();
}

EventLoop::~EventLoop()
{
    delete ep;
}


void 
EventLoop::loop(void)
{
    while(!isquit)
    {
        std::vector<Channel*> things = ep->getActiveCh(-1);
        for(auto it=things.begin();it!=things.end();++it) 
        {
            (*it)->handleEvent();
        }
    }
}

Epoll *EventLoop::getEpoll(void)
{
    return ep;
}

void EventLoop::addChannel(Channel * ch)
{
    ep->addEp(ch);
}

