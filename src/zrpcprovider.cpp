#include "zrpcprovider.h"
#include "zrpcapplication.h"
#include "package.pb.h"

//提供发布rpc方法的函数接口
void ZrpcProvider::notifyService(google::protobuf::Service *service)
{
    ServiceInfo serviceInfo;
    //获取当前对象的内部信息
    const google::protobuf::ServiceDescriptor* serviceDescPtr = 
    service->GetDescriptor();
    //获取服务名
    std::string serviceName = serviceDescPtr->name();
    //获取方法数量
    int methodCnt = serviceDescPtr->method_count();

    //遍历方法填入map内
    for(int i = 0; i < methodCnt; ++i)
    {
        const google::protobuf::MethodDescriptor* methodPtr = 
            serviceDescPtr->method(i);

        std::string methodName = methodPtr->name();
        serviceInfo.m_methodMap.insert({methodName, methodPtr});
    }
    serviceInfo.m_service = service;
    m_serviceInfoMap.insert({serviceName, serviceInfo});
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
        //连接断开
        conn->shutdown();
    }
}
//读写操作
//数据格式：n(包头大小4个字节) + 包头(服务名 + 方法名 + 参数长度) + 参数
void ZrpcProvider::OnMessage(const muduo::net::TcpConnectionPtr& conn,
                                muduo::net::Buffer* buffer,
                                muduo::Timestamp receiveTime)
{
    std::string recvBuf = buffer->retrieveAllAsString();
    //读取4个字节的包头大小
    uint16_t headerSize = 0;
    recvBuf.copy((char*)&headerSize, 4, 0);
    //根据包头大小读取buf内相应长度的字符
    std::string headerStr = recvBuf.substr(4, headerSize);
    //反序列化数据
    zrpc::RpcPackage rpcPackage;
    std::string serviveName;
    std::string methodName;
    uint32_t argSize;

    if(rpcPackage.ParseFromString(headerStr))
    {
        //数据反序列化成功
        serviveName = rpcPackage.service_name();
        methodName = rpcPackage.method_name();
        argSize = rpcPackage.arg_size();
    }
    else
    {
        //反序列化失败
        std::cout << "header:" << headerStr << "parse error!" << std::endl;
        return;
    }
    
    std::string argStr = recvBuf.substr(4 + headerSize, argSize);

    std::cout <<"========================================"<< std::endl;
    std::cout << "headerSize: " << headerSize << std::endl;
    std::cout << "headerStr: " << headerStr << std::endl;
    std::cout << "serviveName: " << serviveName << std::endl;
    std::cout << "methodName: " << methodName << std::endl;
    std::cout << "argStr: " << argStr << std::endl;
    std::cout <<"========================================"<< std::endl;
}