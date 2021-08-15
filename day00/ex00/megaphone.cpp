#include <iostream>


std::string ft_string_toupper(char *arg)
{
	std::string str = "";

	for (int i = 0; arg[i]; i++)
	{
		if (arg[i] >= 'a' && arg[i] <= 'z')
			arg[i] -= 32;
		str += arg[i];
	}
	return (str);
}

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < argc; i++)
			std::cout << ft_string_toupper(argv[i]);
	}
	std::cout << std::endl;
	return 0;
}
