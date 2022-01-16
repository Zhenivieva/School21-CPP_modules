//
// Created by Marleen Maryjane on 1/15/22.
//

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"


class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(const std::string &name);
	FragTrap(FragTrap const &src);
	~FragTrap();
	FragTrap& operator=(const FragTrap &rhs);

//	void attack(std::string const &target);
//	void takeDamage(unsigned int amount);
//	void beRepaired(unsigned int amount);

	void highFivesGuys(void);
};
#endif //FRAGTRAP_HPP
