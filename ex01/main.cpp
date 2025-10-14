#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombies;
	int N;
	int i;

	N = 5;
	i = -1;
	zombies = zombieHorde(5, "turbofaker");
	if (!zombies)
		return (1);
	while (++i < N)
		zombies[i].announce();
	delete[] zombies;
	return (0);
}
