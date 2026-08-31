#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

class ScavTrap: virtual public ClapTrap {
	private:
		bool	_guardMode;
	public:
		ScavTrap ( std::string name = "ScavTrap" );
		ScavTrap ( const ScavTrap& other );
		ScavTrap &operator= ( const ScavTrap& other );
		~ScavTrap ();

		void	attack(const std::string& target);
		void	guardGate();
		void	printMsg(const std::string& msg);
};

#endif
