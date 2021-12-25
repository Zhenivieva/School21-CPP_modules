//
// Created by Marleen Maryjane on 8/7/21.
//

#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "address: " << &string << std::endl;
	std::cout << "address with pointer: " << stringPTR << std::endl;
	std::cout << "address with reference: " << &stringREF << std::endl;

	std::cout << "string with pointer: " << *stringPTR << std::endl;
	std::cout << "string with reference: " << stringREF << std::endl;
}