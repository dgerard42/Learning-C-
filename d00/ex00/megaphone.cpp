
#include <iostream>
#include <string>
#include <cctype>

int             main(int argc, char **argv)
{
  	if (argc == 1)
	{
		std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		std::cout << std::endl;
	}
	else if (argc > 1)
	{
		for (int i = 0; argv[1][i] != 0; i++)
			argv[1][i] = toupper(argv[1][i]);
		std::cout << argv[1];
		std::cout << std::endl;
  	}
}


