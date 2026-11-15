#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade):
_name(name),
_grade(grade)
{
	std::cout << "Constructor with name and grade" << std::endl;
	if (this->_grade < 1)
		throw GradeTooHighException();
	else if (this->_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other):
_name(other._name),
_grade(other._grade)
{
	std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_grade = other._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor called" << std::endl;
}

const std::string Bureaucrat::getName() const {
	return (this->_name);
}

int Bureaucrat::getGrade() const {
	return (this->_grade);
}

void Bureaucrat::incrementGrade() {
	this->_grade--;
	if (this->_grade < 1)
		throw GradeTooHighException();
}

void Bureaucrat::decrementGrade() {
	this->_grade++;
	if (this->_grade > 150)
		throw GradeTooLowException();
}

const char *GradeTooHighException::what() const throw() {
	return "Grade is too high.";
}

const char *GradeTooLowException::what() const throw() {
	return "Grade is too low.";
}

std::ostream &operator<< (std::ostream &out, const Bureaucrat &bureaucrat) {
	return (out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade());
}
