#include "ClapTrap.hpp"
#include <iostream>

// Constructors
ClapTrap::ClapTrap( void )
{
	name = "";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "\e[0;33mDefault Constructor called of ClapTrap\e[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name)
{
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "\e[0;33mConstructor called of ClapTrap\e[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage) : name(name), hitPoints(hitPoints), energyPoints(energyPoints), attackDamage(attackDamage)
{
	std::cout << "\e[0;33mConstructor called of ClapTrap\e[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	std::cout << "\e[0;33mCopy Constructor called of ClapTrap\e[0m" << std::endl;
}


// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "\e[0;31mDestructor called of ClapTrap\e[0m" << std::endl;
}


// Operators
ClapTrap & ClapTrap::operator=(const ClapTrap &assign)
{
	this->name = assign.name;
	this->hitPoints = assign.hitPoints;
	this->energyPoints = assign.energyPoints;
	this->attackDamage = assign.attackDamage;
	return *this;
}

// Methods
void	ClapTrap::attack(const std::string& target)
{
	if (this->isActive() == false) {
		std::cout << "ClapTrap " + name + " cant attack, no hitpoints and/or energy!" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "ClapTrap " + name + " attacks " + target + " causing " + std::to_string(attackDamage) + " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->isActive() == false) {
		std::cout << "ClapTrap " + name + " cant repair, no hitpoints and/or energy!" << std::endl;
		return ;
	}
	hitPoints = hitPoints + amount;
	energyPoints--;
	std::cout << "ClapTrap " + name + " has been repaired for " + std::to_string(amount) + "hp!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	hitPoints = hitPoints - amount;
	if (hitPoints < 0)
		hitPoints = 0;
	std::cout << "ClapTrap " + name + " takes " + std::to_string(amount) + " points of damage!" << std::endl;
}

bool	ClapTrap::isActive( void )
{
	if (energyPoints > 0 && hitPoints > 0)
		return (true);
	return (false);
}