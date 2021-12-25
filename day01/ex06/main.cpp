//
// Created by Marleen Maryjane on 12/24/21.
//

#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen karen;

	if (argc != 2)
		std::cerr << "wrong number of arguments" << std::endl;
	else
		karen.complain(argv[1]);
	return (0);
}
