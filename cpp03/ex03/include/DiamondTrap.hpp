#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>

class DiamondTrap: public FragTrap, ScavTrap {
	private:
		bool	_guardMode;
	public:
		DiamondTrap ( std::string name = "DiamondTrap" );
		DiamondTrap ( const DiamondTrap& other );
		DiamondTrap &operator= ( const DiamondTrap& other );
		~DiamondTrap ();

		void	attack(const std::string& target);
		void	guardGate();
		void	printMsg(const std::string& msg);
};

#endif
