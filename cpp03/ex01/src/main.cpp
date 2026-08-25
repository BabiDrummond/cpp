#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) {
	{
		ClapTrap clap("Bob");
		ScavTrap scav("Joe");

		clap.attack("Joe");
		clap.attack("Joe");
		clap.takeDamage(5);
		clap.beRepaired(5);
		scav.attack("Bob");
		scav.attack("Bob");
		scav.guardGate();
	}

	return 0;
}
