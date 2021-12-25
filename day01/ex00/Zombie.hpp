//
// Created by Marleen Maryjane on 8/14/21.
//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
	std::string _name;
	Zombie();

public:
	explicit Zombie(const std::string &name);

	~Zombie();
	void announce();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif //ZOMBIE_HPP
