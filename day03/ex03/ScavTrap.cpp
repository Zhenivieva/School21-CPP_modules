//
// Created by Marleen Maryjane on 1/15/22.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap: Default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string &name)
{
	std::cout << "ScavTrap: Constructor with name called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << "ScavTrap: Copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
	std::cout << "ScavTrap: Assignation operator called" << std::endl;
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	return (*this);
}

void ScavTrap::attack(std::string const &target)
{
	if (_hitPoints >= _attackDamage)
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " <<
		_attackDamage << " points of damage!" << std::endl;
	else
		std::cout << "ScavTrap has too few hitpoints" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap " << this->_name << " takes " << amount << " points of damage!"
	<< std::endl;
	_energyPoints -= amount;
	if (_energyPoints <= 0)
		_energyPoints = 0;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "ScavTrap " << this->_name << " has been repaired for " << amount << " points."
	<< std::endl;
	_hitPoints += amount;
	_energyPoints +=amount;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " has entered in Gate keeper mode"	<< std::endl;
}