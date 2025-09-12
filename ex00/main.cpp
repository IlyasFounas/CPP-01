#include "Zombie.hpp"

int	main(void)
{
	Zombie	*z;

	z = newZombie("turbofaker>>");
    if (!z)
	{
		std::cerr << "Allocation failed" << std::endl;
		return (1);
	}
	z->announce();
    randomChump("UrleyKayn");
    delete z;
	return (0);
}
