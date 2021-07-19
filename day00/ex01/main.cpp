#include <iostream>
#include <iomanip>
#include "Contact.ClassName.hpp"
void ft_display(int i)
{
    std::cout << std::setw(10) << "Index"
              << "|"
              << std::setw(10) << "Firstname"
              << "|"
              << std::setw(10) << "Lastname"
              << "|"
              << std::setw(10) << "Nickname"
              << "|";
              
              if (i == 1)
              {
              std::cout << std::setw(10) << "Secret"
              << "|"
              << std::setw(10) << "Phone";
              }
              std::cout << std::endl;
}
void ft_search(Contact *inst)
{
    int i = 0;
    int index;
    std::string first;
    std::string last;
    std::string nickname;
    std::string Secret;
    std::string phone;
    ft_display(0);
    while (i < 8)
    {
        first = inst[i].getfirst();
        last = inst[i].getlast();
        nickname = inst[i].getNickname();
        Secret = inst[i].getSecret();
        phone = inst[i].getNumber();
        if (first.length() > 0)
        {
            std::cout << std::setw(10) << i << '|';
            if (first.length() >= 10)
                first[9] = '.';
            std::cout << std::setw(10) << first.substr(0, 10) << '|';
            if (first.length() >= 10)
                last[9] = '.';
            std::cout << std::setw(10) << last.substr(0, 10) << '|';
            if (nickname.length() >= 10)
                nickname[9] = '.';
            std::cout << std::setw(10) << nickname.substr(0, 10) << '|' << std::endl;
        }
        i++;
    }
    std::cout << "Which Index :";
    std::cin >> index;
    if (index >= 0 && index <= 8)
    {
        first = inst[index].getfirst();
        last = inst[index].getlast();
        nickname = inst[index].getNickname();
        Secret = inst[index].getSecret();
        phone = inst[index].getNumber();
        ft_display(1);
        std::cout << std::setw(10) << index << '|';
        if (first.length() >= 10)
            first[9] = '.';
        std::cout << std::setw(10) << first.substr(0, 10) << '|';
        if (first.length() >= 10)
            last[9] = '.';
        std::cout << std::setw(10) << last.substr(0, 10) << '|';
        if (nickname.length() >= 10)
            nickname[9] = '.';
        std::cout << std::setw(10) << nickname.substr(0, 10) << '|';
        if (Secret.length() >= 10)
            Secret[9] = '.';
        std::cout << std::setw(10) << Secret.substr(0, 10) << '|';
        if (phone.length() >= 10)
            phone[9] = '.';
        std::cout << std::setw(10) << phone.substr(0, 10) << std::endl;
    }
    return;
}

void ft_add(Contact *inst, int i)
{

    std::string first;
    std::string last;
    std::string nick;
    std::string secret;
    std::string num;
    if (inst[i].getfirst().length() == 0)
    {
        std::cout << "First Name : ";
        std::cin.ignore();
        std::getline(std::cin, first);
        std::cout << "Last Name : ";
        std::cin.ignore();
        std::getline(std::cin, last);
        std::cout << "NickName : ";
        std::cin.ignore();
        std::getline(std::cin, nick);
        std::cout << "darkest_secret : ";
        std::cin.ignore();
        std::getline(std::cin, secret);
        std::cout << "Phone Number : ";
        std::getline(std::cin, num);
        inst[i].setContact(num, first, last, nick, secret);
    }
}
int main()
{
    Contact inst[8];

    std::string test;
    int i = 0;

    while (true)
    {

        std::cout << "Choose a value : " << std ::endl
                  << "- ADD" << std ::endl
                  << "- SEARCH"
                  << std ::endl
                  << "- EXIT"
                  << std ::endl;
        std::cin >> test;
        std::cin.ignore();
        if (test == "SEARCH")
            ft_search(inst);
        if (test == "ADD")
        {
            ft_add(inst, i);
            i++;
        }
        if (test == "EXIT")
            exit(0);
    }
    return (0);
}