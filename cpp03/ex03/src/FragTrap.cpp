#include "FragTrap.hpp"

FragTrap::FragTrap ( std::string name ): ClapTrap(name) {
	this->printMsg(_name + " constructor says: Hello hello hello!");
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap (const FragTrap& other): ClapTrap(other) {
	this->printMsg(_name + " copy constructor called");
}

FragTrap& FragTrap::operator= (const FragTrap& other) {
	this->printMsg(_name + " copy assignment operator called");
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	return (*this);
}

FragTrap::~FragTrap () {
	this->printMsg(_name + " destructor called");
}

void FragTrap::highFivesGuys( void ) {
	this->printMsg(_name + " high fives you guys!");
}

void FragTrap::printMsg(const std::string& msg) {
	std::cout << "[FragTrap]: " << msg << std::endl;
}
