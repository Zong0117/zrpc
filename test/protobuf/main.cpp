#include "test.pb.h"
#include <iostream>
#include <string>

using namespace fixbug;

int main()
{
    // LoginResponse rsp;
    // ResultCode* rc = rsp.mutable_result();
    // rc->set_errcode(1);
    // rc->set_errmsg("失败");

    GetFriendListResponse rsp;
    ResultCode *rc = rsp.mutable_result();
    rc->set_errcode(0);

    User *user1 = rsp.add_friend_list();
    user1->set_name("ll");
    user1->set_age(10);
    user1->set_sex(User::MAN);

    User *user2 = rsp.add_friend_list();
    user2->set_name("llll");
    user2->set_age(20);
    user2->set_sex(User::WOMAN);

    std::cout << rsp.friend_list_size() << std::endl;
}

int main0()
{
    //封装
    LoginRequest req;
    req.set_name("li");
    req.set_pwd("123");

    //序列化
    std::string send_str;
    if (req.SerializeToString(&send_str))
    {
        std::cout << send_str << std::endl;
    }

    //反序列化
    LoginRequest reqb;
    if (reqb.ParseFromString(send_str))
    {
        std::cout << reqb.name() << std::endl;
        std::cout << reqb.pwd() << std::endl;
    }
    return 0;
}