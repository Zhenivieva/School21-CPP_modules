
#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap a;
	ClapTrap b("John");
	ClapTrap c = a;
	b.attack("Sara");
	c.takeDamage(10);
	c.beRepaired(10);

	return 0;
}
