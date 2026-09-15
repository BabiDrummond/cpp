#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <string.h>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
	public:
		WrongCat ();
		WrongCat ( const WrongCat &other );
		WrongCat &operator= ( const WrongCat &other );
		~WrongCat ();

		void		makeSound( void ) const;

		void		setType( std::string type );
		std::string	getType ( void ) const;

		void		printMsg(const std::string& msg) const;
};

#endif