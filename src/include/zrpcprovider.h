#pragma once
#include "google/protobuf/service.h"

//rpc服务发布类
class ZrpcProvider
{
public:
    //提供发布rpc方法的函数接口
    void notifyService(google::protobuf::Service* service);
    //启动rpc服务节点，开始提供rpc远程网络调用服务
    void Run();
};