#include "Cat.hpp"

Cat::Cat(): Animal() {
    this->printMsg("Constructor miau miau called!");
    this->setType("Cat");
}

Cat::Cat (const Cat& other): Animal() {
	this->printMsg("Copy constructor miau miau called");
    setType(other._type);
}

Cat& Cat::operator= (const Cat& other) {
	this->printMsg("Copy assignment operator miau miau called");
	if (this != &other) {
		setType(other._type);
	}
	return (*this);
}

Cat::~Cat () {
	this->printMsg("Destructor miau miau called");
}

void	Cat::makeSound( void ) const {
	this->printMsg("Miau miau!");
}

void	Cat::setType(std::string type) {
	this->_type = type;
}

std::string Cat::getType ( void ) const {
	return (this->_type);
}

void	Cat::printMsg(const std::string& msg) const {
	std::cout << "[Cat]: " << msg << std::endl;
}
