#include <functional>

#include "zrpcprovider.h"
#include "zrpcapplication.h"

//提供发布rpc方法的函数接口
void ZrpcProvider::notifyService(google::protobuf::Service *service)
{

}
//启动rpc服务节点，开始提供rpc远程网络调用服务
void ZrpcProvider::Run()
{
    std::string ip = 
    ZrpcApplication::getInstance().getConfig().getValue("rpcip");

    uint16_t port = 
    atoi(ZrpcApplication::getInstance().getConfig().getValue("rpcport").c_str());
    muduo::net::InetAddress addr(ip, port);

    //创建tcpserver对象
    muduo::net::TcpServer server(&m_eventLoop, addr, "RpcProvider");
    //绑定连接读写回调
    server.setConnectionCallback(
        std::bind(
            &ZrpcProvider::OnConnection, this, 
            std::placeholders::_1));

    server.setMessageCallback(
        std::bind(
            &ZrpcProvider::OnMessage, this, 
            std::placeholders::_1, 
            std::placeholders::_2, 
            std::placeholders::_3));

    //设置线程数
    server.setThreadNum(4);
    std::cout << "RpcProvider start at ip: " << ip << " port: " << port << std::endl;
    //启动
    server.start();
    //epoll_wait
    m_eventLoop.loop();
}

//连接操作
void ZrpcProvider::OnConnection(const muduo::net::TcpConnectionPtr& conn)
{
    if(!conn->connected())
    {
        
    }
}
//读写操作
void ZrpcProvider::OnMessage(const muduo::net::TcpConnectionPtr& conn,
                        muduo::net::Buffer* buffer,
                        muduo::Timestamp receiveTime)
{
    
}