#include "Dog.hpp"

Dog::Dog():
Animal(),
_brain(new Brain()) {
    this->printMsg("Constructor Au Au called!");
    setType("Dog");
}

Dog::Dog (const Dog& other):
Animal(),
_brain (new Brain(*other._brain)) {
	this->printMsg("Copy constructor Au Au called");
    setType(other._type);
}

Dog& Dog::operator= (const Dog& other) {
	this->printMsg("Copy assignment operator Au Au called");
	if (this != &other) {
		setType(other._type);
		*_brain = *other._brain;
	}
	return (*this);
}

Dog::~Dog () {
	this->printMsg("Destructor Au Au called");
	delete(_brain);
}

void	Dog::makeSound( void ) const {
	printMsg("Au Au!");
}

void	Dog::setType(std::string type) {
	this->_type = type;
}

std::string Dog::getType ( void ) const {
	return (this->_type);
}

void Dog::setBrain(Brain *brain) {
	_brain = brain;
}

Brain*	Dog::getBrain() {
	return (this->_brain);
}

void	Dog::printMsg(const std::string& msg) const {
	std::cout << "[Dog]: " << msg << std::endl;
}
