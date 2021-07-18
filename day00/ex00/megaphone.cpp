#include <iostream>

int main(int ac, char **av)
{
    int i = 1;
    int j = 0;
    while (av[i])
    {
        j = 0;
        while (av[i][j])
        {
            if (av[i][j] >= 97 && av[i][j] <= 122)
                av[i][j] -= 32;
            j++;
        }
        std::cout << av[i];
        i++;
    }
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return 0;
}