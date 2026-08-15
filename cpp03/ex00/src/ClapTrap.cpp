#include "ClapTrap.hpp"

ClapTrap::ClapTrap ():
hitPoints(10),
energyPoints (10),
attackDamage (0) {}

ClapTrap::ClapTrap (const ClapTrap& other):
hitPoints(10),
energyPoints (10),
attackDamage (0) {}

ClapTrap& ClapTrap::operator= (const ClapTrap& other) {
    if (this != &other) {
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    return (*this);
}

ClapTrap::~ClapTrap () {
}
