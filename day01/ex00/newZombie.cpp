//
// Created by Marleen Maryjane on 8/15/21.
//

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *newZombie;
	newZombie = new Zombie(name);
	return (newZombie);
}