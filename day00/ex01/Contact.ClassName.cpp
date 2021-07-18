#include <iostream>
#include "Contact.ClassName.hpp"

void Contact::setContact(std::string num, std::string first, std::string last, std::string nick, std::string secret)
{
    phone_number = num;
    first_name = first;
    last_name = last;
    nickname = nick;
    darkest_secret = secret;
}

std::string Contact::getNumber()
{
    return phone_number;
}
std::string Contact::getfirst()
{
    return first_name;
}

std::string Contact::getlast()
{
    return last_name;
}
std::string Contact::getNickname()
{
    return nickname;
}
std::string Contact::getSecret()
{
    return darkest_secret;
}
