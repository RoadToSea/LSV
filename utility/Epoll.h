#pragma once
#include <sys/socket.h>
#include <sys/epoll.h>
#include <sys/unistd.h>
#include <vector>
#include <cstring>
#include "Log.h"
#include "Channel.h"

#define     MAX_EVENT       128

class Channel;

class Epoll
{
private:
    int epfd =-1;
    epoll_event* evs=nullptr;
public:
    Epoll(/* args */);
    ~Epoll();
    void addEp(int fd , int status);
    void addEp(Channel* channel);
    std::vector<epoll_event> getActiveEV(int timeout); 
    std::vector<Channel*> getActiveCh(int timeout);
};

