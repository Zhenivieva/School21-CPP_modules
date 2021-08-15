//
// Created by Marleen Maryjane on 8/7/21.
//
#include <iostream>
#include <string>
#include "phonebook.hpp"


std::string ft_string_toupper(std::string arg)
{
	std::string str1 = "";

	for (int i = 0; arg[i]; i++)
	{
		if (arg[i] >= 'a' && arg[i] <= 'z')
			arg[i] -= 32;
		str1 += arg[i];
	}
	return (str1);
}

int main(int argc, char *argv[])
{
	std::string inputStr;
	Phonebook phonebook;

	while (1)
	{
		std::cout << "Please choose option (enter EXIT | ADD | SEARCH):" << std::endl;
		std::cin >> inputStr;
		inputStr = ft_string_toupper(inputStr);
		if (inputStr == "EXIT")
			break ;
		else if (inputStr == "ADD")
			phonebook.addUser();
		else if (inputStr == "SEARCH")
		{
			phonebook.searchAll();
		}
		else
			std::cout << "Invalid option" << std::endl;
	}
	return (0);
}