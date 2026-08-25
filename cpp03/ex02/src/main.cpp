#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main( void ) {
	{
		FragTrap frag("Joe");
		FragTrap frag2(frag);
		FragTrap frag3("Jonas");

		frag = frag3;
		
		frag.attack("Bob");
		frag.attack("Bob");
		frag.takeDamage(10);
		frag.takeDamage(50);
		frag.beRepaired(10);
		frag.takeDamage(50);
		frag.beRepaired(10);
		frag.highFivesGuys();
	}
	return 0;
}
