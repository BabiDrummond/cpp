#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
	private:
		std::string name;
	public:
		Zombie();
		~Zombie();
		Zombie* newZombie( std::string name );
		void announce( void );
		void randomChump( std::string name );
};

#endif