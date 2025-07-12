#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *z2;

    z2 = new Zombie(name);
    return (z2);
}

int main(void)
{
    Zombie *z1;

    z1 = newZombie("turbofaker>>");
    z1->announce();
    delete z1;
    return (0);
}
