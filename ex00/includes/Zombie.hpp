#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include "iostream"
# include "string"

class Zombie
{
  public:
	Zombie(std::string name = NULL);
	~Zombie();
	void announce(void);

  private:
	std::string _name;
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif