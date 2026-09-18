#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal() {
    this->printMsg("Constructor miau miau called!");
    this->setType("WrongCat");
}

WrongCat::WrongCat (const WrongCat& other): WrongAnimal() {
	this->printMsg("Copy constructor miau miau called");
    setType(other.type);
}

WrongCat& WrongCat::operator= (const WrongCat& other) {
	this->printMsg("Copy assignment operator miau miau called");
	if (this != &other) {
		setType(other.type);
	}
	return (*this);
}

WrongCat::~WrongCat () {
	this->printMsg("Destructor miau miau called");
}

void	WrongCat::makeSound( void ) const {
	this->printMsg("Miau miau!");
}

void	WrongCat::setType(std::string type) {
	this->type = type;
}

std::string WrongCat::getType ( void ) const {
	return (this->type);
}

void	WrongCat::printMsg(const std::string& msg) const {
	std::cout << "[WrongCat]: " << msg << std::endl;
}
