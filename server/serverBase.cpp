#include "serverBase.h"

serverBase::~serverBase()
{
    delete accept;
}

serverBase::serverBase(EventLoop* loop_,InetAddr* addr_)
{
    accept = new Acceptor(loop_,addr_);
    // std::function<void(Socket*)> servFunc = std::bind(&serverBase::acceptConnect,this,std::placeholders::_1);
    // accept->setAcceptFunc(servFunc);  
    
}


void serverBase::acceptConnect(Socket* sock)
{
    InetAddr* TempAddr = new InetAddr();
    //这里必须在堆上创建,否则在栈上创建出了if范围就会销毁,调用析构函数关闭套接字
    Socket* cliSocket = new Socket(sock->saccept(TempAddr));
    Lerror(cliSocket->getSocket() == -1, "connect to client error");
    cliSocket->setNonblock();
    Channel* chan = new Channel(cliSocket->getSocket(),eLoop);
    std::function<void()> func = std::bind(&serverBase::Response , this, cliSocket->getSocket());
    chan->setCallback(func);
    chan->addtoRead(); 
}


void serverBase::Response(int fd)
{
    char buf[1024]={0};
    while(1)
    {
        int recvLen = recv(fd,buf,sizeof(buf),MSG_DONTWAIT);
        if(recvLen>0)
        {
            std::cout<<"receive info :"<<buf<<std::endl;
            send(fd,buf,sizeof(buf),0);
        }
        //系统中断
        else if(recvLen==-1&&errno==EINTR)
        {
            std::cout<<"continue reading"<<std::endl;
            continue;
        }
        //读取完毕
        else if(recvLen==-1&&((errno==EAGAIN)||(errno==EWOULDBLOCK)))
        {
            std::cout<<"read over"<<std::endl;
            break;
        }
        else if(recvLen==0)
        {
            std::cout<<"client disconnect "<<std::endl;
            close(fd);
            break;
        }
    }
    
}






