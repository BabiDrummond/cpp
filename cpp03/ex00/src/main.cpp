#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap clap("Bob");

	clap.attack("Joe");
	clap.takeDamage(5);
	clap.beRepaired(5);
	
	return 0;
}
