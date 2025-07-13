#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie	*zombies;
	int N;
	int i;

	N = 5;
	i = -1;
	zombies = zombieHorde(5, "turbofaker>>");
	while (++i < N)
		zombies[i].announce();
	delete[] zombies;
	return (0);
}
