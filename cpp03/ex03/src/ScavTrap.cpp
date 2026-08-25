#include "ScavTrap.hpp"

ScavTrap::ScavTrap ( std::string name ):
ClapTrap(name),
_guardMode(false)
{
	this->printMsg(_name + " constructor called");
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap (const ScavTrap& other):
ClapTrap(other),
_guardMode(false)
{
	this->printMsg(_name + " copy constructor called");
}

ScavTrap& ScavTrap::operator= (const ScavTrap& other) {
	this->printMsg(_name + " copy assignment operator called");
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	this->_guardMode = other._guardMode;
	return (*this);
}

ScavTrap::~ScavTrap () {
	this->printMsg(_name + " destructor called");
}

void ScavTrap::attack(const std::string& target) {
	if (_hitPoints <= 0) {
		this->printMsg(_name + " is dead and can't attack!");
	} else if (_energyPoints <= 0) {
		this->printMsg(_name + " doesn't have enough energy to attack!");
	} else {
		_energyPoints--;
		this->printMsg(_name + " attacks " + target + ", causing " + itoSTR(_attackDamage) + " points of damage!");
		this->printMsg(_name + " current energy points: " + itoSTR(_energyPoints));
	}
}

void ScavTrap::guardGate() {
	_guardMode = !_guardMode;
	if (_guardMode)
		this->printMsg(_name + " is now in Gate keeper mode.");
	else
		this->printMsg(_name + " is out of Gate keeper mode.");
}

void	ScavTrap::printMsg(const std::string& msg) {
	std::cout << "[ScavTrap]: " << msg << std::endl;
}
