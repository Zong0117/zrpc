#pragma once

#include "zrpcconfig.h"

//框架基础类
class ZrpcApplication
{
public:
    //初始化框架
    static void Init(int argc, char** argv);
    //单例接口
    static ZrpcApplication& getInstance();
private:
    static ZrpcConfig m_config;

    ZrpcApplication(){}
    ZrpcApplication(const ZrpcApplication&) = delete;
    ZrpcApplication(ZrpcApplication&&) = delete;
};