#include "ScavTrap.hpp"

ScavTrap::ScavTrap ( std::string name ) : ClapTrap(name) {
	std::cout << "ScavTrap constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap (const ScavTrap& other): ClapTrap(other) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator= (const ScavTrap& other) {
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	return (*this);
}

ScavTrap::~ScavTrap () {
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (_energyPoints && _hitPoints) {
		_energyPoints--;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		std::cout << "Current energy points: " << _energyPoints << std::endl;
		std::cout << std::endl;
	} else {
		std::cout << "ScavTrap " << _name << " doesn't have enough energy or hit points to attack!" << std::endl;
		std::cout << "Current energy points: " << _energyPoints << std::endl;
		std::cout << "Current hit points: " << _hitPoints << std::endl;
		std::cout << std::endl;
	}
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
