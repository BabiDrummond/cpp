#include "Dog.hpp"

Dog::Dog(): Animal() {
    this->setType("Dog");
    this->printMsg("Constructor Au Au called!");
}

Dog::Dog (const Dog& other): Animal() {
    this->type = other.type;
	this->printMsg("Copy constructor Au Au called");
}

Dog& Dog::operator= (const Dog& other) {
	this->printMsg("Copy assignment operator Au Au called");
	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

Dog::~Dog () {
	this->printMsg("Destructor Au Au called");
}

void	Dog::makeSound( void ) const {
	printMsg("Au Au!");
}

void	Dog::setType(std::string type) {
	this->type = type;
}

std::string Dog::getType ( void ) const {
	return (this->type);
}

void	Dog::printMsg(const std::string& msg) const {
	std::cout << "[Dog]: " << msg << std::endl;
}
