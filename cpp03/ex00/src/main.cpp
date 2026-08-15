#include "ClapTrap.hpp"

int main( void ) {
	std::cout << "===============TEST 1===============" << std::endl;
	{
		ClapTrap clap("Bob");

		clap.attack("Joe");
		clap.takeDamage(5);
		clap.beRepaired(5);
	}

	std::cout << "===============TEST 2===============" << std::endl;
	{
		ClapTrap clap("Bob");

		clap.attack("Joe");
		clap.attack("Joe");
		clap.attack("Joe");
		clap.attack("Joe");
		clap.attack("Joe");
		clap.attack("Joe");
		clap.attack("Joe");
		clap.attack("Joe");
		clap.attack("Joe");
		clap.attack("Joe");
		clap.attack("Joe");
	}
	
	std::cout << "===============TEST 3===============" << std::endl;
	{
		ClapTrap clap("Bob");

		clap.attack("Joe");
		clap.takeDamage(5);
		clap.takeDamage(5);
		clap.beRepaired(5);
		clap.takeDamage(5);
	}

	return 0;
}
