#include "ScavTrap.hpp"
#include <iostream>

// Constructors
ScavTrap::ScavTrap( void ) : ClapTrap("", 100, 50, 20)
{
	std::cout << "\e[0;33mDefault Constructor called of ScavTrap\e[0m" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "\e[0;33mConstructor called of ScavTrap\e[0m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    _name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;

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
    _name = assign._name;
    _hitPoints = assign._hitPoints;
    _energyPoints = assign._energyPoints;
    _attackDamage = assign._attackDamage;
	return *this;
}

// Methods
void	ScavTrap::guardGate( void )
{
	if (this->isActive() == false) {
		std::cout << "ScavTrap " + _name + " cant guard, no hitpoints and/or energy!" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "ScavTrap " + _name + " is in guard mode!" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->isActive() == false) {
		std::cout << "ClapTrap " + _name + " cant attack, no hitpoints and/or energy!" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "ClapTrap " + _name + " attacks " + target + " causing " + std::to_string(_attackDamage) + " points of damage!" << std::endl;
}