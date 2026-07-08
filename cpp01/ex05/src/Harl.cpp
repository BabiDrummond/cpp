#include "Harl.hpp"

void Harl::debug( void ) {
	std::cout << "[ DEBUG ] Eu amo ter bacon extra para o meu hambúrguer 7XL-duplo-queijo-triplopicles-ketchup-especial. Eu realmente amo!" << std::endl;
}

void Harl::info( void ) {
	std::cout << "[ INFO ] Eu não acredito que adicionar bacon extra custa mais dinheiro. Vocês não colocaram bacon suficiente no meu hambúrguer! Se vocês tivessem colocado, eu não estaria pedindo por mais!" << std::endl;
}

void Harl::warning( void ) {
	std::cout << "[ WARNING ] Eu acho que mereço ter bacon extra de graça. Eu venho aqui há anos, enquanto você começou a trabalhar aqui apenas no mês passado." << std::endl;
}

void Harl::error( void ) {
	std::cout << "[ ERROR ] Isto é inaceitável! Eu quero falar com o gerente agora." << std::endl;
}

void Harl::complain( std::string level ) {
	std::string levels[4] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	void (Harl::*complains[4])() =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	for (int i = 0; i < 4; i++) {
		if (levels[i] == level)
			(this->*complains[i])();
	}
}
