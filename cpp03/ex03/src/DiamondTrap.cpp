#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap ( std::string name ): 
ClapTrap(name + "_clap_name"),
ScavTrap(name), 
FragTrap(name),
_name(name)
{
	this->printMsg(_name + " constructor called");
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
}

DiamondTrap::DiamondTrap (const DiamondTrap& other): 
ClapTrap(other), 
ScavTrap(other), 
FragTrap(other),
_name(other._name)
{
	this->printMsg(_name + " copy constructor called");
}

DiamondTrap& DiamondTrap::operator= (const DiamondTrap& other) {
	if (this != &other) {
		ClapTrap::operator=(other);
		this->_name = other._name;
	}
	this->printMsg(_name + " copy assignment operator called");
	return (*this);
}

DiamondTrap::~DiamondTrap () {
	this->printMsg(_name + " destructor called");
}

void DiamondTrap::whoAmI( void ) {
	this->printMsg("I am " + DiamondTrap::_name + " and " + ClapTrap::_name);
}

void DiamondTrap::printMsg(const std::string& msg) {
	std::cout << "[DiamondTrap]: " << msg << std::endl;
}
