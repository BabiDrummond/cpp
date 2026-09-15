#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
	protected:
		std::string	type;

	public:
		Animal ();
		Animal ( const Animal &other );
		Animal &operator= ( const Animal &other );
		~Animal ();

		void	makeSound( void ) const;

		void setType( std::string type );
        std::string getType ( void ) const;
		
		void	printMsg(const std::string& msg) const;
};

#endif
