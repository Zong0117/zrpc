#pragma once

#include <muduo/net/TcpServer.h>
#include <muduo/net/EventLoop.h>
#include <muduo/net/InetAddress.h>
#include <muduo/net/TcpConnection.h>

#include <functional>
#include <unordered_map>
#include "google/protobuf/service.h"
#include <google/protobuf/descriptor.h>
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

    //服务信息
    struct ServiceInfo
    {
        //当前服务对象
        google::protobuf::Service* m_service;
        //服务内方法集合
        std::unordered_map<std::string,
        const google::protobuf::MethodDescriptor*> m_methodMap;
    };

    //存储服务信息集合
    std::unordered_map<std::string, ServiceInfo> m_serviceInfoMap;

    //eventloop指针
    muduo::net::EventLoop m_eventLoop;
};