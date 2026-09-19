#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Constructor for brain called!" << std::endl;
}

Brain::Brain(const Brain &other) {
	std::cout << "Copy constructor for brain called!" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
}

Brain& Brain::operator= (const Brain &other) {
	std::cout << "Copy assignment operator for brain called!" << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; i++)
        	this->_ideas[i] = other._ideas[i];
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << "Destructor for brain called!" << std::endl;
}

void Brain::setIdea(std::string idea, int index) {
	this->_ideas[index] = idea;
}

std::string Brain::getIdea(int index) {
	return(this->_ideas[index]);
}

void	Brain::setIdeas(std::string idea) {
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = idea;
}

std::string*	Brain::getIdeas() {
	return (this->_ideas);
}
