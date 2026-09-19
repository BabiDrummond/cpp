#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void ) {
	{
		std::cout << "===============ANIMALS===============" << std::endl;
		Animal *animals[10];

		for (int i = 0; i < 5; i++) {
			animals[i] = new Cat();
		}
		for (int i = 5; i < 10; i++) {
			animals[i] = new Dog();
		}

		std::cout << "I am a " << animals[1]->getType() << std::endl;
		animals[1]->makeSound();
		std::cout << "I am a " << animals[5]->getType() << std::endl;
		animals[5]->makeSound();

		for (int i = 0; i < 10; i++) {
			delete (animals[i]);
		}
	}
	{
		std::cout << "===============DEEP COPIES===============" << std::endl;
		Dog juninho;
		Dog miltinho;
		
		juninho.getBrain()->setIdeas("i think i'm a dog");
		miltinho.getBrain()->setIdeas("i think i'm a butterfly");
	
		std::cout << juninho.getBrain()->getIdea(0) << std::endl;
		std::cout << miltinho.getBrain()->getIdea(0) << std::endl;

		juninho = miltinho;
		miltinho.getBrain()->setIdeas("FOG");
		std::cout << juninho.getBrain()->getIdea(0) << std::endl;
		std::cout << miltinho.getBrain()->getIdea(0) << std::endl;
	}
	return (0);
}
