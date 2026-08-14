#include "Fixed.hpp"

Fixed::Fixed ():
_value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed ( const int raw ) {
	_value = raw << _fracBits;
}

Fixed::Fixed ( const float raw ) {
	_value = roundf(raw * (1 << _fracBits));
}

Fixed::Fixed (const Fixed& other):
_value(other._value) {
	std::cout << "Copy constructor called" << std::endl;
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

int Fixed::getRawBits ( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits ( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

int Fixed::toInt ( void ) const {
	return (_value >> _fracBits);
}

float	Fixed::toFloat ( void ) const {
	return (_value >> _fracBits);
}
