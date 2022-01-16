//
// Created by Marleen Maryjane on 1/15/22.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :_name("Sara"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap: Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10),
_energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap: Constructor with name called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "ClapTrap: Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "ClapTrap: Assignation operator called" << std::endl;
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	return (*this);
}
//ClapTrap <name> attack <target>, causing <damage> points of damage!
void ClapTrap::attack(std::string const &target)
{
	if (_hitPoints >= _attackDamage)
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " <<
		_attackDamage << " points of damage!" << std::endl;
	else
		std::cout << "ClapTrap has too few hitpoints" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!"
	<< std::endl;
	_energyPoints -= amount;
	if (_energyPoints <= 0)
		_energyPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " has been repaired for " << amount << " points."
	<< std::endl;
	_hitPoints += amount;
	_energyPoints +=amount;
}
//
//const std::string &ClapTrap::getName() const {
//	return _name;
//}
//
//unsigned int ClapTrap::getHitPoints() const {
//	return _hitPoints;
//}
//
//unsigned int ClapTrap::getEnergyPoints() const {
//	return _energyPoints;
//}
//
//unsigned int ClapTrap::getAttackDamage() const {
//	return _attackDamage;
//}
//
//void ClapTrap::setName(const std::string &name) {
//	_name = name;
//}
//
//void ClapTrap::setHitPoints(unsigned int hitPoints) {
//	_hitPoints = hitPoints;
//}
//
//void ClapTrap::setEnergyPoints(unsigned int energyPoints) {
//	_energyPoints = energyPoints;
//}
//
//void ClapTrap::setAttackDamage(unsigned int attackDamage) {
//	_attackDamage = attackDamage;
//}
