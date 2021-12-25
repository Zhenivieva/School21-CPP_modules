//
// Created by Marleen Maryjane on 12/24/21.
//

#include "Karen.hpp"

void Karen::_debug()
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle"
				 "-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::_info()
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put"
				 " enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::_warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been "
				 "coming here for years and you just started working here last"
				 " month." << std::endl;
}

void Karen::_error()
{
	std::cout << "This is unacceptable, I want to speak to the manager"
				 " now." << std::endl;
}

void Karen::_unknown()
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void Karen::complain(std::string level)
{
	int i;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (i = 0; i < 4; i++)
		if (level == levels[i])
			break;
	switch(i)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			Karen::_debug();
			std::cout << std::endl;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			Karen::_info();
			std::cout << std::endl;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			Karen::_warning();
			std::cout << std::endl;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			Karen::_error();
			std::cout << std::endl;
		break;
		default: Karen::_unknown();
	}
}