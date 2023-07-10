#include "Message.h"
Message::Message()
{
    readMessage();
}
Message::~Message()
{
    writeMessage();
}
void Message::set_newText(const std::string& newText)
{
    text_=newText;
}
void Message::set_newSender(const std::string& newSender)
{
    sender_=newSender;
}
void Message::set_newResiver(const std::string& newResiver)
{
    resiver_=newResiver;
}
std::string& Message::getText()
{
    return text_;
}
std::string& Message::getSender()
{
    return sender_;
}
std::string& Message::getResiver()
{
    return resiver_;
}


