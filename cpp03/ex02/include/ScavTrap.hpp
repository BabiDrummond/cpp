#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

class ScavTrap: public ClapTrap {
	public:
		ScavTrap ( std::string name = "ScavTrap" );
		~ScavTrap ();

		void	attack(const std::string& target);
		void	guardGate();
};

#endif
