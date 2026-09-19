#include "Animal.hpp"

Animal::Animal ():
_type("Animal") {
	this->printMsg("Generic default constructor called");
}

Animal::Animal (const Animal& other): 
_type(other._type) {
	this->printMsg("Generic copy constructor called");
}

Animal& Animal::operator= (const Animal& other) {
	this->printMsg("Generic copy assignment operator called");
	if (this != &other) {
		setType(other._type);
	}
	return (*this);
}

Animal::~Animal () {
	this->printMsg("Generic destructor called");
}

void	Animal::makeSound( void ) const {
	printMsg("Generic sound");
}

void	Animal::setType(std::string type) {
	this->_type = type;
}

std::string Animal::getType ( void ) const {
	return (this->_type);
}

void	Animal::printMsg(const std::string& msg) const {
	std::cout << "[Animal]: " << msg << std::endl;
}
