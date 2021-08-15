//
// Created by Marleen Maryjane on 8/7/21.
//

#include "Zombie.hpp"

int main(int argc, char *argv[])
{
	int n = 10;
	Zombie *myZombies = zombieHorde(n, "Lisa" );
	for (int i = 0; i < n; i++)
		myZombies[i].announce();
	delete[] myZombies;

	return (0);
}