#include "zrpcapplication.h"
#include <iostream>
#include <unistd.h>

ZrpcConfig ZrpcApplication::m_config;

void showArgsHelp()
{
    std::cout << "配置文件读取错误" << std::endl; 
}
void ZrpcApplication::init(int argc, char** argv)
{
    //识别配置文件
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
    std::cout << config_file << std::endl;
    //加载配置文件
    m_config.loadConfigFile(config_file.c_str());
    
    std::cout << "rpcip" << m_config.getValue("rpcserverip") << std::endl;
    std::cout << "rpcport" << m_config.getValue("rpcserverprot") << std::endl;
    std::cout << "zkip" << m_config.getValue("zookeeperip") << std::endl;
    std::cout << "zkport" << m_config.getValue("zookeeperprot") << std::endl;
}
ZrpcApplication& ZrpcApplication::getInstance()
{
    static ZrpcApplication app;
    return app;
}