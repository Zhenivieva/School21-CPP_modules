//
// Created by Marleen Maryjane on 1/15/22.
//

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
private:
	std::string _name;
	unsigned int _hitPoints;
	unsigned int _energyPoints;
	unsigned int _attackDamage;
public:
	DiamondTrap();
	DiamondTrap(const std::string &name);
	DiamondTrap(DiamondTrap const &src);
	~DiamondTrap();
	DiamondTrap& operator=(const DiamondTrap &rhs);

	void attack(std::string const &target);
	void whoAmI(void);

};
#endif //DIAMONDTRAP_HPP
