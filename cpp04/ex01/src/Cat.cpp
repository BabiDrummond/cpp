#include "Cat.hpp"

Cat::Cat(): Animal(), _brain(new Brain()) {
    this->printMsg("Constructor miau miau called!");
    setType("Cat");
}

Cat::Cat (const Cat& other): Animal() {
	this->printMsg("Copy constructor miau miau called");
    setType(other._type);
	this->_brain = other._brain;
}

Cat& Cat::operator= (const Cat& other) {
	this->printMsg("Copy assignment operator miau miau called");
	if (this != &other) {
		setType(other._type);
		this->_brain = other._brain;
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
