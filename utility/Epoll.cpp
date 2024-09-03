#include "Epoll.h"

Epoll::Epoll(/* args */)
{
    epfd = epoll_create1(0);
    Lerror(epfd ==-1 , "epoll_create error");
    evs = new epoll_event[MAX_EVENT];
    Lerror(evs ==nullptr , "epoll_event malloc error");
}

Epoll::~Epoll()
{
    if(epfd!=-1)
    {
        close(epfd);
    }
    if(evs!=nullptr)
    {
        delete[] evs;
    }
}

void Epoll::addEp(int fd, int status)
{
    epoll_event ev;
    memset(&ev,0,sizeof(ev));
    ev.data.fd = fd;
    ev.events = status;
    int ctlRet = epoll_ctl(epfd,EPOLL_CTL_ADD,fd,&ev);
    Lerror(ctlRet == -1,"epoll_ctl func error");
}

void Epoll::addEp(Channel* channel)
{
    epoll_event ev;
    memset(&ev,0,sizeof(ev));
    ev.data.ptr=(void*)channel;
    ev.events=channel->event;
    if(!channel->inEpoll)
    {
        Lerror(epoll_ctl(epfd,EPOLL_CTL_ADD,channel->getFd(),&ev)==-1,"epoll_ctl func error");
        channel->inEpoll=true;
    }

    else
        Lerror(epoll_ctl(epfd,EPOLL_CTL_MOD,channel->getFd(),&ev)==-1,"epoll_ctl func error")
}

std::vector<epoll_event> Epoll::getActiveEV(int timeout)
{
    int activeNum = epoll_wait(epfd,evs,MAX_EVENT,timeout);
    Lerror(activeNum == -1,"epoll_wait func error");
    std::vector<epoll_event> ret;

    for(int i =0; i<activeNum;i++)
    {
        ret.push_back(evs[i]);
    }
    return ret;
}


std::vector<Channel*> Epoll::getActiveCh(int timeout)
{
    int activeNum = epoll_wait(epfd,evs,MAX_EVENT,timeout);
    Lerror(activeNum == -1,"epoll_wait func error");
    std::vector<Channel*> ret;

    for(int i =0; i<activeNum;i++)
    {
        Channel* chan = (Channel*)evs[i].data.ptr;
        chan->revent=evs[i].events;
        ret.push_back(chan);
    }
    return ret;
}
