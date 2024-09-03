#pragma once

#include <memory.h>
#include <errno.h>
#include "Log.h"
#include "Epoll.h"
#include "Socket.h"
#include "EventLoop.h"
#include "Acceptor.h" 
#include <map>
#include "Connection.h"

#define MAX_LISNUM      128
#define MAX_EVENTS      65535

class serverBase
{
private:
   EventLoop* eLoop;
   Acceptor* acceptor;
   std::map<int,Connection*> connections;

public:
    serverBase(EventLoop* loop_,InetAddr* addr_);
    ~serverBase();
    void Response(int fd);
    void acceptConnection(Socket* sock);
    void deleteConnection(Connection* cn);

};


