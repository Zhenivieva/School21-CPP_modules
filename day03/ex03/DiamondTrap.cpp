//
// Created by Marleen Maryjane on 1/15/22.
//

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap: Default constructor called" << std::endl;
	this->_name = "SaraDiamond";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const std::string &name) : FragTrap(name), ScavTrap(name), ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap: Constructor with name called" << std::endl;
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
	std::cout << "DiamondTrap: Copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: Destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
{
	std::cout << "DiamondTrap: Assignation operator called" << std::endl;
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	return (*this);
}

void DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}
void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap: My name is " << this->_name << ", and my Clapname is " << ClapTrap::_name <<std::endl;
}