#include "Channel.h"
#include "Epoll.h"

Channel::~Channel()
{
    if(fd!=-1)
        close(fd);
}

void Channel::addtoRead(void)
{
    this->event = EPOLLIN| EPOLLET;
    loop->addChannel(this);
}

int Channel::getFd(void)
{
    return fd;
}

void Channel::setFd(int fd_)
{
    fd=fd_;
}

void Channel::setEventLoop(EventLoop* eloop)
{
    loop = eloop;
}

EventLoop* Channel::getEventLoop(void)
{
    return loop;
}

void Channel::setCallback(std::function<void()> func)
{
    callback = func;
}

void Channel::handleEvent(void)
{
    this->callback();
}
