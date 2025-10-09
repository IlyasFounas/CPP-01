#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *res;
    int i;

    i = 0;
    res = new (std::nothrow) Zombie[N];
    if (!res)
    {
        std::cerr << "Allocation failed" << std::endl;
        return (NULL);
    }
    while (i < N)
    {
        res[i].setName(name);
        i++;
    }
    return (res);
}
