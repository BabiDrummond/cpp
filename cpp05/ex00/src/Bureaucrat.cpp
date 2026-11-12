#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {

}

Bureaucrat::Bureaucrat(const Bureaucrat &other) {

}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other){

}

std::string Bureaucrat::getName() const {
    return (this->name);
}

int Bureaucrat::getGrade() {
    return (this->grade);
}

Bureaucrat::~Bureaucrat() {

}
