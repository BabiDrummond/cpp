#ifndef DOG_HPP
#define DOG_HPP

#include <string.h>
#include "Animal.hpp"

class Dog: public Animal {
	public:
		Dog ();
		Dog ( const Dog &other );
		Dog &operator= ( const Dog &other );
		~Dog ();

		void		makeSound( void ) const;
		
		void		setType( std::string type );
		std::string	getType ( void ) const;
		
		void		printMsg(const std::string& msg) const;
};

#endif