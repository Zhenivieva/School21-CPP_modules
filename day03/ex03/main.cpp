
#include "DiamondTrap.hpp"

int main( void )
{
	DiamondTrap b("John");
	DiamondTrap c = b;
	b.attack("Sara");
	c.takeDamage(20);
	c.beRepaired(20);
	c.highFivesGuys();
	c.guardGate();
	c.whoAmI();

	return 0;
}
