#include "Fixed.hpp"

Fixed::Fixed ():
_value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed ( const int raw ):
_value (raw << _fracBits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed ( const float raw ):
_value ((int)roundf(raw * (1 << _fracBits))) {
	std::cout << "Float constructor called" << std::endl;
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

float Fixed::toFloat ( void ) const {
	return ((float) _value / (1 << _fracBits));
}

bool	Fixed::operator<( const Fixed& other ) const {
	return (this->_value < other._value);
}

bool	Fixed::operator>( const Fixed& other ) const {
	return (this->_value > other._value);
}

bool	Fixed::operator<=( const Fixed& other ) const {
	return (this->_value <= other._value);
}

bool	Fixed::operator>=( const Fixed& other ) const {
	return (this->_value >= other._value);
}

bool	Fixed::operator==( const Fixed& other ) const {
	return (this->_value == other._value);
}

bool	Fixed::operator!=( const Fixed& other ) const {
	return (this->_value != other._value);
}

Fixed	Fixed::operator+ ( const Fixed& other ) const {
	Fixed newFixed;

	newFixed._value = this->_value + other._value;
	return (newFixed);
}

Fixed	Fixed::operator- ( const Fixed& other ) const {
	Fixed newFixed;

	newFixed._value = this->_value - other._value;
	return (newFixed);
}

Fixed	Fixed::operator* ( const Fixed& other ) const {
	Fixed newFixed;
	
	newFixed._value = (this->_value * other._value) >> _fracBits;
	return (newFixed);
}

Fixed	Fixed::operator/ ( const Fixed& other ) const {
	if (other._value == 0)
		throw std::runtime_error("Error: division by 0!\n");

	Fixed newFixed;

	newFixed._value = (this->_value << _fracBits) / other._value;
	return (newFixed);
}

Fixed&	Fixed::operator++ ( void ) {
	this->_value++;
	return (*this);
}

Fixed&	Fixed::operator-- ( void ) {
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator++ ( int ) {
	Fixed old = *this;
	operator++();
	return (old);
}

Fixed	Fixed::operator-- ( int ) {
	Fixed old = *this;
	operator--();
	return (old);
}

static	Fixed& min( Fixed& a,  Fixed& b ) {
	return (a < b ? a : b);
}

static 	Fixed& max( Fixed& a,  Fixed& b ) {
	return (a > b ? a : b);
}

static 	const Fixed& min( const Fixed& a,  const Fixed& b ) {
	return (a < b ? a : b);
}

static 	const Fixed& max( const Fixed& a,  const Fixed& b ) {
	return (a > b ? a : b);
}

std::ostream& operator<< ( std::ostream& out, const Fixed& fixed ) {
	return (out << fixed.toFloat());
}
