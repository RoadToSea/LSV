#include "serverBase.h"


int main()
{
    EventLoop* eventloop = new EventLoop();
    InetAddr* inetaddr=new InetAddr("127.0.0.1",2345);
    serverBase* server = new serverBase(eventloop,inetaddr); 
    eventloop->loop();

    return 0;
}