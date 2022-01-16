//
// Created by Marleen Maryjane on 1/15/22.
//

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string _name;
	unsigned int _hitPoints;
	unsigned int _energyPoints;
	unsigned int _attackDamage;

public:
	ClapTrap();
	ClapTrap(const std::string &name);
	ClapTrap(ClapTrap const &src);
	~ClapTrap();
	ClapTrap& operator=(const ClapTrap &rhs);

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

//	const std::string &getName() const;
//	unsigned int getHitPoints() const;
//	unsigned int getEnergyPoints() const;
//	unsigned int getAttackDamage() const;
//	void setName(const std::string &name);
//	void setHitPoints(unsigned int hitPoints);
//	void setEnergyPoints(unsigned int energyPoints);
//	void setAttackDamage(unsigned int attackDamage);
};
#endif //CLAPTRAP_HPP
