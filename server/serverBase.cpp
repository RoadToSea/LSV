#include "serverBase.h"

serverBase::~serverBase()
{
    delete acceptor;
}

serverBase::serverBase(EventLoop* loop_,InetAddr* addr_):eLoop(loop_)
{
    acceptor = new Acceptor(eLoop,addr_);
    std::function<void(Socket*)> servFunc = std::bind(&serverBase::acceptConnection,this,std::placeholders::_1);
    acceptor->setAcceptFunc(servFunc);  
}


void serverBase::acceptConnection(Socket* sock)
{
    InetAddr TempAddr ;
    //这里必须在堆上创建,否则在栈上创建出了if范围就会销毁,调用析构函数关闭套接字
    Socket* cliSocket = new Socket(sock->saccept(&TempAddr));
    Lerror(cliSocket->getSocket() == -1, "connect to client error");
    cliSocket->setNonblock();
    Connection* cn = new Connection(eLoop,cliSocket);
    std::function<void()> func = std::bind(&serverBase::deleteConnection,this,cn);
    cn->setdeleteFunc(func);
    connections.insert(std::make_pair(cliSocket->getSocket(),cn));
}

void serverBase::deleteConnection(Connection *cn)
{
    connections.erase(cn->getSocket()->getSocket());
    delete cn;
}
