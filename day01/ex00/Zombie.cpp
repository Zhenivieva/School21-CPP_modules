//
// Created by Marleen Maryjane on 8/14/21.
//

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name) { Zombie::_name = name;}

void Zombie::announce(void)
{
	std::cout << "<" << Zombie::_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "<" << Zombie::_name << "> is dead." << std::endl;
}