//
// Created by Marleen Maryjane on 8/7/21.
//
#include <iostream>
#include <string>
#include "Zombie.hpp"

int main(int argc, char *argv[])
{
	Zombie stackBart = Zombie("Bart");
	stackBart.announce();

	Zombie *heapLisa = newZombie("Lisa");
	heapLisa->announce();
	delete heapLisa;

	randomChump("Homer");
	randomChump("March");

	return (0);
}