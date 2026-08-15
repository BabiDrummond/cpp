#include "ClapTrap.hpp"

ClapTrap::ClapTrap ( std::string name ):
_name(name),
_hitPoints(100),
_energyPoints (50),
_attackDamage (20) {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap (const ClapTrap& other):
_name(other._name),
_hitPoints(other._hitPoints),
_energyPoints (other._energyPoints),
_attackDamage (other._attackDamage) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator= (const ClapTrap& other) {
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap () {
	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (_energyPoints && _hitPoints) {
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		std::cout << "Current energy points: " << _energyPoints << std::endl;
		std::cout << std::endl;
	} else {
		std::cout << "ClapTrap " << _name << " doesn't have enough energy or hit points to attack!" << std::endl;
		std::cout << "Current energy points: " << _energyPoints << std::endl;
		std::cout << "Current hit points: " << _hitPoints << std::endl;
		std::cout << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints) {
		_hitPoints -= amount;
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
		std::cout << "Current hit points: " << _hitPoints << std::endl;
		std::cout << std::endl;
	} else {
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
		std::cout << "Current hit points: " << _hitPoints << std::endl;
		std::cout << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_energyPoints && _hitPoints) {
		_hitPoints += amount;
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " repairs " << amount << " hit points!" << std::endl;
		std::cout << "Current hit points: " << _hitPoints << std::endl;
		std::cout << "Current energy points: " << _energyPoints << std::endl;
		std::cout << std::endl;
	} else {
		std::cout << "ClapTrap " << _name << " doesn't have enough energy or hit points to repair itself!" << std::endl;
		std::cout << "Current energy points: " << _energyPoints << std::endl;
		std::cout << "Current hit points: " << _hitPoints << std::endl;
		std::cout << std::endl;
	}
}
