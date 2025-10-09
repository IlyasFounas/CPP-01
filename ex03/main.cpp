#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon gun = Weapon("gun");
		HumanB jim("Jim");
		jim.setWeapon(gun);
		jim.attack();
		gun.setType("some other type of gun");
		jim.attack();
	}
	return (0);
}
