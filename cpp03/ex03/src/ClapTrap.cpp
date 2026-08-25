#include "ClapTrap.hpp"

ClapTrap::ClapTrap ( std::string name ):
_name(name),
_hitPoints(10),
_energyPoints (10),
_attackDamage (0) {
	this->printMsg(_name + " default constructor called");
}

ClapTrap::ClapTrap (const ClapTrap& other):
_name(other._name),
_hitPoints(other._hitPoints),
_energyPoints (other._energyPoints),
_attackDamage (other._attackDamage) {
	this->printMsg(_name + " copy constructor called");
}

ClapTrap& ClapTrap::operator= (const ClapTrap& other) {
	this->printMsg(_name + " copy assignment operator called");
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap () {
	this->printMsg(_name + " destructor called");
}

void	ClapTrap::attack(const std::string& target) {
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

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints <= 0) {
		this->printMsg(_name + " is already dead!");
	} else {
		_hitPoints -= amount;
		this->printMsg(_name + " takes " + itoSTR(amount) + " points of damage!");
		this->printMsg(_name + " current hit points: " + itoSTR(_hitPoints));
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_hitPoints <= 0) {
		this->printMsg(_name + " is already dead and can't be repaired!");
	} else if (_energyPoints <= 0) {
		this->printMsg(_name + " doesn't have enough energy to repair itself!");
	} else {
		_hitPoints += amount;
		_energyPoints--;
		this->printMsg(_name + " repairs " + itoSTR(amount) + " hit points!");
		this->printMsg(_name + " current hit points: " + itoSTR(_hitPoints));
		this->printMsg(_name + " current energy points: " + itoSTR(_energyPoints));
	}
}

void	ClapTrap::printMsg(const std::string& msg) {
	std::cout << "[ClapTrap]: " << msg << std::endl;
}

std::string	itoSTR(const int nbr)
{
	std::ostringstream out;

	out << nbr;
	return (out.str());
}
