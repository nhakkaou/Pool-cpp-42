#include <iostream>
#include <iomanip>
#include "Contact.ClassName.hpp"

void ft_search(Contact *inst)
{
    int i = 0;
    std::string first = ;
    std::string last = ;
    std::string nickname = ;
    std::string Secret = ;

    std::cout << std::setw(10) << "Index"
              << "|"
              << std::setw(10) << "Firstname"
              << "|"
              << std::setw(10) << "Lastname"
              << "|"
              << std::setw(10) << "Nickname"
              << "|"
              << std::setw(10) << "Secret"
              << "|"
              << std::setw(10) << "Phone"
              << std ::endl;
    while (i < 8)
    {
        if (inst[i].getfirst().length() > 0)
        {
            if (inst[i].getfirst().length() >= 10)
                inst[i].getfirst()[9] = '.';
            std::cout << std::setw(10) << inst[i].getfirst().substr(0, 10)
                      << std::endl;
        }
        i++;
    }

    return;
}
//setwidth
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
                  << "1. Search" << std ::endl
                  << "2. Add"
                  << std ::endl
                  << "3. Exit"
                  << std ::endl;
        std::cin >> test;
        if (test == "1")
            ft_search(inst);
        if (test == "2")
        {
            ft_add(inst, i);
            i++;
        }
        if (test == "3")
            exit(0);
    }
    return (0);
}