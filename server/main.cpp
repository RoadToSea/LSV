#include "serverBase.h"


int main()
{
    EventLoop eventloop;
    InetAddr* inetaddr=new InetAddr("127.0.0.1",2345);
    serverBase server(&eventloop,inetaddr); 
    eventloop.loop();

    return 0;
}