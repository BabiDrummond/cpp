#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie = newZombie("Carrot");
	zombie->announce();
	
	randomChump("Potato");
	
	delete(zombie);
}
