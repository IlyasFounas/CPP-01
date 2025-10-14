#include "Harl.hpp"

Harl::Harl()
{
	return ;
}

Harl::~Harl()
{
	return ;
}

void Harl::complain(std::string level)
{
    int i = -1;

    if (level.empty() == true || level == "")
        return ;
    void (Harl::*funcPtr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    while (++i < 4)
        if (level == levels[i])
            (this->*funcPtr[i])();
}
void	Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "printf(); > gdb" << std::endl;
}

void	Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "Read the manual ?" << std::endl;
}

void	Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "WARNIIIING" << std::endl;
}

void	Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "error 404." << std::endl;
}
