#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {
	private:
		Brain *_brain;
	public:
		Dog ();
		Dog ( const Dog &other );
		Dog &operator= ( const Dog &other );
		~Dog ();

		void		makeSound( void ) const;
		
		void		setType( std::string type );
		std::string	getType ( void ) const;
		
		void		setBrain(Brain *brain);
		Brain*		getBrain();
		
		void		printMsg(const std::string& msg) const;
};

#endif