
#include "DiamondTrap.hpp"

int main( void )
{
	DiamondTrap b("Sara");
	DiamondTrap c = b;
	b.attack("John");
	c.takeDamage(20);
	c.beRepaired(20);
	c.highFivesGuys();
	c.guardGate();
	c.whoAmI();

	return 0;
}
