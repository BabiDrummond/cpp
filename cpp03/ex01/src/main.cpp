#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) {
	{
		ScavTrap scav("Joe");

		scav.attack("Bob");
		scav.takeDamage(5);
		scav.beRepaired(5);
		scav.guardGate();
	}

	return 0;
}
