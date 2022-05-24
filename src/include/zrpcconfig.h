#pragma once
#include <unordered_map>

class ZrpcConfig
{
public:
    //读取配置文件
    void loadConfigFile(const char* config_file);
    
    //查询文件内key对应的value
    std::string getValue(const std::string& key);
private:
    //处理字符串空格函数
    void Trim(std::string& line);

    std::unordered_map<std::string, std::string> m_configMap;
};