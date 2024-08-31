#pragma once

#include <memory.h>
#include <errno.h>
#include "Log.h"
#include "Epoll.h"
#include "Socket.h"
#include "EventLoop.h"
#include "Acceptor.h" 

#define MAX_LISNUM      128
#define MAX_EVENTS      65535

class serverBase
{
private:
   EventLoop* eLoop;
   Acceptor* accept;
   void acceptConnect(Socket* sock);
public:
    serverBase(EventLoop* loop_,InetAddr* addr_);
    ~serverBase();

    void startLis();
    void Response(int fd);

};


