
#include "ScavTrap.hpp"

int main( void )
{
	ScavTrap a;
	ScavTrap b("John");
	ScavTrap c = a;
	b.attack("Sara");
	c.takeDamage(10);
	c.beRepaired(10);

	return 0;
}
