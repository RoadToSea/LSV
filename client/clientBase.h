#include <memory.h>
#include <errno.h>
#include <thread>
#include "Log.h"
#include "Epoll.h"
#include "Socket.h"

class clientBase{ 
private:
    Socket m_socket;
    InetAddr addr;
    char sendBuf[1024];
    char recvBuf[1024];
public:
    clientBase(){};
    clientBase(const char* ip ,int port);
    void setAddr(const char* ip,int port,sa_family_t family );
    void startConnect(const char* ip ,int port);
    void startConnect();
    void sendFunc(void);
    void recvFunc(void);
    void cliLaunch(const char* ip ,int port);
};