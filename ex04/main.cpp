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

void	replace_line(std::vector<std::string> *tab, std::string str,
		std::string str2, int y, int i)
{
	std::string res = (*tab)[i].substr(0, y) + str2 + (*tab)[i].substr(y
			+ str.length());
	(*tab)[i] = res;
	std::cout << &(*tab)[i][y] << std::endl;
}

void	fill_outfile(std::ifstream &infile, std::ofstream &outfile,
		std::string str, std::string str2)
{
	int	i;
	int	y;

	i = 0;
	std::vector<std::string> tab;
	std::string line;
	while (std::getline(infile, line))
	{
		tab.push_back(line);
		y = -1;
		while (tab[i][++y])
		{
			if (tab[i].compare(y, str.length(), str) == 0)
			{
				replace_line(&tab, str, str2, y, i);
				break ;
			}
		}
		i++;
	}
	y = -1;
	while (++y < i)
		outfile << tab[y] << std::endl;
}

int	main(int argc, char **argv)
{
	if (verif_args(argc) == false)
		return (1);
	std::string outfilename = std::string(argv[1]) + ".replace";
	std::ifstream infile(argv[1]);
	std::ofstream outfile(outfilename.c_str());
	fill_outfile(infile, outfile, argv[2], argv[3]);
	infile.close();
	outfile.close();
	return (0);
}
