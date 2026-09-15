#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main( void ) {
	{
		std::cout << "===============TESTS SUBJECT===============" << std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
	
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
	
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		delete(meta);
		delete(i);
		delete(j);
	}
	{
		std::cout << "===============ANIMAL===============" << std::endl;
		Animal	animal;

		animal.makeSound();
		std::cout << "I am an " << animal.getType() << std::endl;
	}
	{
		std::cout << "===============CAT===============" << std::endl;
		Cat		cat;
		
		cat.makeSound();
		cat.getType();
		std::cout << "I am a " << cat.getType() << std::endl;
	}
	{
		std::cout << "===============DOG===============" << std::endl;
		Dog		dog;
		
		dog.makeSound();
		std::cout << "I am a " << dog.getType() << std::endl;
	}

	return (0);
}
