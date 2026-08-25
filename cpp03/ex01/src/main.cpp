#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) {
	{
		ScavTrap scav("Joe");
		ScavTrap scav2(scav);
		ScavTrap scav3("Jonas");

		scav = scav3;
		
		scav.attack("Bob");
		scav.attack("Bob");
		scav.takeDamage(10);
		scav.beRepaired(10);
		scav.guardGate();
		scav.guardGate();
	}

	return 0;
}
