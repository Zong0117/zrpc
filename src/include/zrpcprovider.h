#pragma once

#include <muduo/net/TcpServer.h>
#include <muduo/net/EventLoop.h>
#include <muduo/net/InetAddress.h>
#include <muduo/net/TcpConnection.h>

#include "google/protobuf/service.h"

//rpc服务发布类
class ZrpcProvider
{
public:
    //提供发布rpc方法的函数接口
    void notifyService(google::protobuf::Service* service);
    //启动rpc服务节点，开始提供rpc远程网络调用服务
    void Run();
private:
    //连接操作
    void OnConnection(const muduo::net::TcpConnectionPtr& conn);
    //读写操作
    void OnMessage(const muduo::net::TcpConnectionPtr& conn,
                            muduo::net::Buffer* buffer,
                            muduo::Timestamp receiveTime);

    //eventloop指针
    muduo::net::EventLoop m_eventLoop;
};