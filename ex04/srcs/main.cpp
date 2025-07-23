#include "ex04.h"

bool	verif_args(int argc)
{
	if (argc != 4)
	{
		if (argc > 4)
			std::cerr << "to many arguments" << std::endl;
		else
			std::cerr << "less arguments" << std::endl;
		return (false);
	}
	return (true);
}

void	fill_outfile(std::ifstream &infile, std::ofstream &outfile)
{
	int	i = 0;
    int y = -1;
	std::vector<std::string> tab;
    std::string line;
	
    while (std::getline(infile, line))
	{
		tab.push_back(line);
		// call the replace function on tab[i]
		i++;
	}
    while (++y < i)
        outfile << tab[i] << std::endl;
}

int	main(int argc, char **argv)
{
	int	exit_code = 0;
	std::string outfilename = std::string(argv[1]) + ".replace";
	std::ifstream infile(argv[1]);
	std::ofstream outfile(outfilename.c_str());
	
    if (verif_args(argc) == true)
		fill_outfile(infile, outfile);
	else
		exit_code = 1;
	infile.close();
	outfile.close();
	return (exit_code);
}
