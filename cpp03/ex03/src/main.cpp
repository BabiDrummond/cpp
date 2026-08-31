#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"


int main( void ) {
	{
		DiamondTrap diamond("Joe");
		DiamondTrap diamond2(diamond);
		DiamondTrap diamond3("Jonas");

		diamond = diamond3;
		
		diamond.attack("Bob");
		diamond.attack("Bob");
		diamond.whoAmI();
	}
	return 0;
}
