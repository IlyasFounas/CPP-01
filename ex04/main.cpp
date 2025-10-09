#include "replace_search.hpp"

bool	verif_args(int argc)
{
	if (argc != 4)
	{
		std::cerr << "replace program should be executed like that : " << std::endl;
		std::cerr << "./replace [filename] [word_to_be_replaced] [replace_word]" << std::endl;
		return (false);
	}
	return (true);
}

std::string	replace_line(std::string line, std::string str,
		std::string str2, int y)
{
	std::string res = line.substr(0, y) + str2 + line.substr(y
			+ str.length());
	return (res);
}

void	fill_outfile(std::ifstream &infile, std::ofstream &outfile,
		std::string str, std::string str2)
{
	int	y;
	int i = 0;
	int replace;

	std::string tab;
	std::string line;
	while (std::getline(infile, line))
	{
		y = -1;
		replace = 0;
		while (line[++y])
		{
			if (line.compare(y, str.length(), str) == 0)
			{
				tab = realloc_tab(tab, replace_line(line, str, str2, y));
				replace = 1;
				break ;
			}
		}
		if (replace == 0)
			tab = realloc_tab(tab, line);
		i++;
	}
	outfile << tab << std::endl;
}

int	main(int argc, char **argv)
{
	if (verif_args(argc) == false)
		return (1);
	std::ifstream infile(argv[1]);
   	if (!infile.is_open())
	{
        std::cerr << "Cannot open file " << argv[1] << std::endl;
        return 1;
    }
   	if (infile.fail())
	{
        std::cerr << "Failed to open file " << argv[1] << std::endl;
        return 1;
    }
	std::string outfilename = std::string(argv[1]) + ".replace";
	std::ofstream outfile(outfilename.c_str());
	fill_outfile(infile, outfile, argv[2], argv[3]);
	infile.close();
	outfile.close();
	return (0);
}
