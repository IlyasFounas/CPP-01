#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl turbofaker;
    if (argc != 2)
    {
        std::cout << "How to launch the executable : " << std::endl;
        std::cout << "./harlFilter <string>" << std::endl;
        return (0);
    }
    turbofaker.complain(argv[1]);
}
