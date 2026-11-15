#include "Bureaucrat.hpp"

int main( void ) {
	std::cout << "Constructor test" << std::endl;
	{
		try {
			Bureaucrat bureaucrat("feio", 0);
		} catch (IBureaucratException &e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}
	}
	std::cout << "Decrement test" << std::endl;
	{
		Bureaucrat bureaucrat("feio", 150);
		try {
			bureaucrat.decrementGrade();
		} catch (IBureaucratException &e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}
		std::cout << bureaucrat << std::endl;
	}
	std::cout << "Increment test" << std::endl;
	{
		Bureaucrat bureaucrat("feio", 1);
		try {
			bureaucrat.incrementGrade();
		} catch (IBureaucratException &e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}
		std::cout << bureaucrat << std::endl;
	}
	return (0);
}
