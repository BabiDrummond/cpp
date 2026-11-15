#include "Bureaucrat.hpp"

int main( void ) {
	Bureaucrat bureaucrat("feio", 150);
	try {
		bureaucrat.decrementGrade();
	} catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << bureaucrat << std::endl;
	return (0);
}
