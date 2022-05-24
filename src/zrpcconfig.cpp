#include "./include/zrpcconfig.h"
#include <iostream>
#include <fstream>

//读取配置文件
void ZrpcConfig::loadConfigFile(const char *config_file)
{
    //开启文件
    std::fstream f;
    f.open(config_file);
    if (!f.is_open())
    {
        std::cout << "can not find conf" << std::endl;
    }
    //分行读直到文件end
    while (!f.eof())
    {
        std::string line;
        getline(f, line);

        //处理行前行后空格
        Trim(line);

        //处理#注释和空情况
        if (line[0] == '#' || line.empty())
        {
            continue;
        }

        //处理没有=的情况
        int idx = line.find('=');
        if (idx == -1)
        {
            continue;
        }

        //获取key value并去除空格
        std::string key;
        std::string value;
        key = line.substr(0, idx);
        Trim(key);
        value = line.substr(idx + 1, line.size() - idx);
        Trim(value);

        m_configMap.insert({key, value});
    }
    f.close();
}

//查询文件内key对应的value
std::string ZrpcConfig::getValue(const std::string &key)
{
    auto it = m_configMap.find(key);
    if (it == m_configMap.end())
    {
        return "";
    }
    return it->second;
}

//处理字符串空格函数
void ZrpcConfig::Trim(std::string &line)
{
    //找到第一个不为空格的索引
    int idx = line.find_first_not_of(' ');
    if (idx != -1)
    {
        //将前面空格去掉
        line = line.substr(idx, line.size() - idx);
    }
    //找到后面第一个不为空格的索引
    idx = line.find_last_not_of(' ');
    if (idx != -1)
    {
        //去掉后面空格
        line = line.substr(0, idx + 1);
    }
}