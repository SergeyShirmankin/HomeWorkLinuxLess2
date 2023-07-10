#include "User.h"
#include <fstream>
User::User()
{
    readUser();
}
User::~User()
{
    writeUser();
}
void User::set_newName(const std::string& newName)
{
    name_=newName;
}
void User::set_newLogin(const std::string& newLogin)
{
    login_=newLogin;
}
void User::set_newPassword(const std::string& newPassword)
{
    password_=newPassword;
}
std::string& User::getName()
{
    return name_;
}
std::string& User::getLogin()
{
    return login_;
}
std::string& User::getPass()
{
    return password_;
}
void User::writeUser()
{
    std::fstream file(pachFile,std::ios::out);
    file << "_name:"<<name_;
    file <<"_login:"<<login_;
    file <<"_pass:"<<password_;
    file.close();
}
void User::readUser()
{
    int a=5;
}

