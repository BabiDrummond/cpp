#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
	private:
		Brain *_brain;
	public:
		Cat ();
		Cat ( const Cat &other );
		Cat &operator= ( const Cat &other );
		~Cat ();

		void		makeSound( void ) const;

		void		setType( std::string type );
		std::string	getType ( void ) const;

		void		printMsg(const std::string& msg) const;
};

#endif