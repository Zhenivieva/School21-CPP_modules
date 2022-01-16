//
// Created by Marleen Maryjane on 1/15/22.
//

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap: Default constructor called" << std::endl;
	this->_name = "SaraFrag";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const std::string &name)
{
	std::cout << "FragTrap: Constructor with name called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "FragTrap: Copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: Destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
	std::cout << "FragTrap: Assignation operator called" << std::endl;
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " says: Hi! Give me a high five!" << std::endl;
}


//void FragTrap::attack(std::string const &target)
//{
//	if (_hitPoints >= _attackDamage)
//		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " <<
//		_attackDamage << " points of damage!" << std::endl;
//	else
//		std::cout << "ScavTrap has too few hitpoints" << std::endl;
//}
//
//void FragTrap::takeDamage(unsigned int amount)
//{
//	std::cout << "FragTrap " << _name << " takes " << amount << " points of damage!"
//	<< std::endl;
//	_energyPoints -= amount;
//	if (_energyPoints <= 0)
//		_energyPoints = 0;
//}
//
//void FragTrap::beRepaired(unsigned int amount)
//{
//	std::cout << "FragTrap " << _name << " has been repaired for " << amount << " points."
//	<< std::endl;
//	_hitPoints += amount;
//	_energyPoints +=amount;
//}