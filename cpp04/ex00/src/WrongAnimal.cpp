#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal ():
type("WrongAnimal") {
	this->printMsg("Generic default constructor called");
}

WrongAnimal::WrongAnimal (const WrongAnimal& other): 
type(other.type) {
	this->printMsg("Generic copy constructor called");
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal& other) {
	this->printMsg("Generic copy assignment operator called");
	if (this != &other) {
		setType(other.type);
	}
	return (*this);
}

WrongAnimal::~WrongAnimal () {
	this->printMsg("Generic destructor called");
}

void	WrongAnimal::makeSound( void ) const {
	printMsg("Generic sound");
}

void	WrongAnimal::setType(std::string type) {
	this->type = type;
}

std::string WrongAnimal::getType ( void ) const {
	return (this->type);
}

void	WrongAnimal::printMsg(const std::string& msg) const {
	std::cout << "[WrongAnimal]: " << msg << std::endl;
}
