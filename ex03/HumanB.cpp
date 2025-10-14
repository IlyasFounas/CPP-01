#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL)
{
    return ;
}

HumanB::~HumanB()
{
    return ;
}

void HumanB::attack()
{
    if (!_weapon)
    {
        std::cout << _name << " attacks with his aura " << std::endl;
        return ;
    }
    std::cout << _name << " attacks with thier ";
    std::cout << (*_weapon).getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}
