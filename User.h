#pragma once
#include <string>
const auto pachFile  = '~/tmp/user.txt';
class User 
{
 public:
    User();
    ~User();

    void set_newName(const std::string& newName);
    void set_newlogin(const std::string&  newLogin);
    void set_newPassword(const std::string& newPassword);

    std::string& getName();
    std::string& getLogin();
    std::string& getPass(); 

 private: 
    std::string name_;
    std::string login_;
    std::string password_;

    void readUser();
    void writeUser();
};
