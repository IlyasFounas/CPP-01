#include "../includes/Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *res;
    int i;

    i = 0;
    res = new Zombie[N];
    while (i < N)
    {
        res[i].setName(name);
        i++;
    }
    return (res);
}
