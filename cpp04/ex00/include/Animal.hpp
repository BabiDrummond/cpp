#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
	protected:
		std::string	_type;

	public:
		Animal ();
		Animal ( const Animal &other );
		Animal &operator= ( const Animal &other );
		virtual ~Animal ();

		virtual void	makeSound( void ) const;

		void			setType( std::string type );
		std::string		getType ( void ) const;
		
		void			printMsg(const std::string& msg) const;
};

#endif
