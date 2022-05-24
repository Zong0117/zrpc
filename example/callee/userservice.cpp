#include <iostream>
#include <string>

#include "user.pb.h"
#include "zrpcapplication.h"
#include "zrpcprovider.h"
//业务层本地服务发布为rpc服务
class UserService : public zong::UserServiceRpc
{
public:
    //本地业务
    bool Login(std::string name, std::string pwd)
    {
        std::cout << "doing login" << std::endl;
        return true;
    }
    //重写UserServiceRpc内虚函数
    void Login(::google::protobuf::RpcController* controller,
                       const ::zong::LoginRequest* request,
                       ::zong::LoginResponse* response,
                       ::google::protobuf::Closure* done)
    {
        //1.接收request
        std::string name = request->name();
        std::string pwd = request->pwd();

        //2.执行本地业务
        bool loginResult = Login(name, pwd);

        //3.组装响应消息
        zong::ResultCode* errInfo = response->mutable_result();
        errInfo->set_errcode(0);
        errInfo->set_errmsg("");
        response->set_success(loginResult);

        //4.执行回调 序列化及网络发送
        done->Run();
    }
};

int main(int argc, char** argv)
{
    //使用框架
    //初始化框架
    ZrpcApplication::Init(argc, argv);

    //将userservice发布到rpc服务节点
    ZrpcProvider provider;
    provider.notifyService(new UserService());

    //启动rpc服务节点 阻塞等待远程调用
    provider.Run();
    return 0;
}