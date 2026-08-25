#include "FragTrap.hpp"

FragTrap::FragTrap ( std::string name ) : ClapTrap(name) {
	std::cout << "FragTrap constructor says: Hello hello hello!" << std::endl;
}

FragTrap::FragTrap (const FragTrap& other): ClapTrap(other) {
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator= (const FragTrap& other) {
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	return (*this);
}

FragTrap::~FragTrap () {
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys( void ) {
	std::cout << "FragTrap high fives you guys!" << std::endl;
}