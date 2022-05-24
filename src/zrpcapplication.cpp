#include "zrpcapplication.h"
#include <iostream>
#include <unistd.h>

ZrpcConfig ZrpcApplication::m_config;

void showArgsHelp()
{
    std::cout << "配置文件读取错误" << std::endl; 
}
void ZrpcApplication::Init(int argc, char** argv)
{
    //判断命令行参数
    if(argc < 2)
    {
        showArgsHelp();
        exit(EXIT_FAILURE);
    }

    int command = 0;
    std::string config_file;
    while((command = getopt(argc, argv, "i:")) != -1)
    {
        switch (command)
        {
        case 'i':
            config_file = optarg;
        break;
        case '?':
            showArgsHelp();
            exit(EXIT_FAILURE);
        case ':':
            showArgsHelp();
            exit(EXIT_FAILURE);
        default:
        break;
        }
    }
    
    //加载配置文件
    m_config.loadConfigFile(config_file.c_str());
}
ZrpcApplication& ZrpcApplication::getInstance()
{
    static ZrpcApplication app;
    return app;
}