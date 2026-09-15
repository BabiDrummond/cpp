#include "Cat.hpp"

Cat::Cat(): Animal() {
    this->setType("Cat");
    this->printMsg("Constructor miau miau called!");
}

Cat::Cat (const Cat& other): Animal() {
    setType(other.type);
	this->printMsg("Copy constructor miau miau called");
}

Cat& Cat::operator= (const Cat& other) {
	this->printMsg("Copy assignment operator miau miau called");
	if (this != &other) {
		setType(other.type);
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
	this->type = type;
}

std::string Cat::getType ( void ) const {
	return (this->type);
}

void	Cat::printMsg(const std::string& msg) const {
	std::cout << "[Cat]: " << msg << std::endl;
}
