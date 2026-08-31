#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>

class DiamondTrap: public ScavTrap, public FragTrap {
	private:
		std::string	_name;
	public:
		DiamondTrap ( std::string name = "DiamondTrap" );
		DiamondTrap ( const DiamondTrap& other );
		DiamondTrap &operator= ( const DiamondTrap& other );
		~DiamondTrap ();

		void	attack(const std::string& target);
		void	whoAmI();
		void	printMsg(const std::string& msg);
};

#endif
