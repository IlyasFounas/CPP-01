#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*z;

	z = new (std::nothrow) Zombie(name);
	return (z);
}
