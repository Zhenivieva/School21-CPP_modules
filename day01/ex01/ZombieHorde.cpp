//
// Created by Marleen Maryjane on 8/15/21.
//
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *myZombies;
	myZombies = new Zombie[N];
	for (int i = 0; i < N; i++)
		myZombies[i].setName(name);
	return (myZombies);
}