//
// Created by Marleen Maryjane on 9/12/21.
//

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout <<_name << " takes a " << _weapon.getType() << std::endl;
}

HumanA::~HumanA() {

}

void HumanA::attack()
{
	std::cout <<_name << " attacks with his " << _weapon.getType() << std::endl;
}