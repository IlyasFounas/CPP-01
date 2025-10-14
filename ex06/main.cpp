#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl turbofaker;
    if (argc != 2)
        return (0);
    turbofaker.complain(argv[1]);
}
