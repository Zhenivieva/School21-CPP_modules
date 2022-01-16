
#include "FragTrap.hpp"

int main( void )
{
	FragTrap b("John");
	FragTrap c = b;
	b.attack("Sara");
	c.takeDamage(20);
	c.beRepaired(20);
	c.highFivesGuys();

	return 0;
}
