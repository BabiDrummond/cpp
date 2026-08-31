#include "Animal.hpp"

Animal::Animal ():
type("Animal") {
	this->printMsg("Default constructor called");
}

Animal::Animal (const Animal& other): 
type(other.type) {
	this->printMsg("Copy constructor called");
}

Animal& Animal::operator= (const Animal& other) {
	this->printMsg("Copy assignment operator called");
	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

Animal::~Animal () {
	this->printMsg("Destructor called");
}

void	Animal::makeSound( void ) {
	this->printMsg("I'm just an animal.");
}

void	Animal::printMsg(const std::string& msg) {
	std::cout << "[Animal]: " << msg << std::endl;
}
