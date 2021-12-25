//
// Created by Marleen Maryjane on 9/12/21.
//

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout <<_name << " has no weapon at the moment" << std::endl;
}

HumanB::~HumanB() {

}

void HumanB::attack()
{
	if (this->_weapon)
		std::cout << _name << " attacks with his " << _weapon->getType() << "!" << std::endl;
	else
		std::cout << _name << " have no weapon!"<< std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
	std::cout <<_name << " takes a " << _weapon->getType() << std::endl;
}