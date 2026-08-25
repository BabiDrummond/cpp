#include "FragTrap.hpp"

FragTrap::FragTrap ( std::string name ) : ClapTrap(name) {
	std::cout << "FragTrap constructor says: Hello hello hello!" << std::endl;
}

FragTrap::~FragTrap () {
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target) {
	if (_energyPoints && _hitPoints) {
		_energyPoints--;
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		std::cout << "Current energy points: " << _energyPoints << std::endl;
		std::cout << std::endl;
	} else {
		std::cout << "FragTrap " << _name << " doesn't have enough energy or hit points to attack!" << std::endl;
		std::cout << "Current energy points: " << _energyPoints << std::endl;
		std::cout << "Current hit points: " << _hitPoints << std::endl;
		std::cout << std::endl;
	}
}

void FragTrap::guardGate() {
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
