#include "Fixed.hpp"

Fixed::Fixed (): _value(0), _bits(8) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed (const Fixed& other): _bits(8) {
	std::cout << "Copy constructor called" << std::endl;
	this->_value = other._value;
}

Fixed& Fixed::operator= (const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_value = other._value;
	return (*this);
}

Fixed::~Fixed () {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
}

void Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
}
