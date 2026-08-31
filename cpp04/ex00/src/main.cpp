#include "Animal.hpp"

int main( void ) {
	std::cout << "===============TESTS===============" << std::endl;
	{
		Animal animal;

		animal.makeSound();
	}

	return 0;
}
