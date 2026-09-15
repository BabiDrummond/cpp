#ifndef CAT_HPP
#define CAT_HPP

#include <string.h>
#include "Animal.hpp"

class Cat: public Animal {
    public:
        Cat ();
        Cat ( const Cat &other );
        Cat &operator= ( const Cat &other );
        ~Cat ();

        void	makeSound( void ) const;

        void setType( std::string type );
        std::string getType ( void ) const;

        void	printMsg(const std::string& msg) const;
};

#endif