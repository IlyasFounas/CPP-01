#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
    return ;
}
Zombie::~Zombie()
{
    return ;
}

void Zombie::announce(void)
{
    std::cout << this->_name << ": Brainz" << std::endl;
}
