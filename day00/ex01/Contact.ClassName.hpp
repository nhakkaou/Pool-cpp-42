#ifndef CONTACT_CLASSNAME_HPP
#define CONTACT_CLASSNAME_HPP
#include <iostream>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

public:
    void setContact(std::string num, std::string first, std::string last, std::string nick, std::string secret);
    std::string getNumber();
    std::string getfirst();
    std::string getlast();
    std::string getNickname();
    std::string getSecret();
};

#endif