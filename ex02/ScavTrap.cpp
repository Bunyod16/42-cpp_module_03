#include "ScavTrap.hpp"
#include <iostream>

// Constructors
ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "\e[0;33mDefault Constructor called of ScavTrap\e[0m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    name = copy.name;
	hitPoints = copy.hitPoints;
	energyPoints = copy.energyPoints;
	attackDamage = copy.attackDamage;

	std::cout << "\e[0;33mCopy Constructor called of ScavTrap\e[0m" << std::endl;
}

// Destructor
ScavTrap::~ScavTrap()
{
	std::cout << "\e[0;31mDestructor called of ScavTrap\e[0m" << std::endl;
}


// Operators
ScavTrap & ScavTrap::operator=(const ScavTrap &assign)
{
    name = assign.name;
    hitPoints = assign.hitPoints;
    energyPoints = assign.energyPoints;
    attackDamage = assign.attackDamage;
	return *this;
}

// Methods
void	ScavTrap::guardGate( void )
{
	if (this->isActive() == false) {
		std::cout << "ScavTrap " + name + " cant guard, no hitpoints and/or energy!" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "ScavTrap " + name + " is in guard mode!" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->isActive() == false) {
		std::cout << "ClapTrap " + name + " cant attack, no hitpoints and/or energy!" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "ClapTrap " + name + " attacks " + target + " causing " + std::to_string(attackDamage) + " points of damage!" << std::endl;
}