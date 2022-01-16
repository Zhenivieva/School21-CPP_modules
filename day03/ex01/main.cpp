
#include "ScavTrap.hpp"

int main( void )
{
	ScavTrap a;
	ScavTrap b("John");
	ScavTrap c = a;
	b.attack("Sara");
	c.takeDamage(20);
	c.beRepaired(20);
	c.guardGate();

	return 0;
}
