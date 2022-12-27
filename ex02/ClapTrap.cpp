#include "ClapTrap.hpp"
#include <iostream>

// Constructors
ClapTrap::ClapTrap( void )
{
	_name = "";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "\e[0;33mDefault Constructor called of ClapTrap\e[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "\e[0;33mConstructor called of ClapTrap\e[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage) : _name(name), _hitPoints(hitPoints), _energyPoints(energyPoints), _attackDamage(attackDamage)
{
	std::cout << "\e[0;33mConstructor called of ClapTrap\e[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
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
	_name = assign._name;
	_hitPoints = assign._hitPoints;
	_energyPoints = assign._energyPoints;
	_attackDamage = assign._attackDamage;
	return *this;
}

// Methods
void	ClapTrap::attack(const std::string& target)
{
	if (this->isActive() == false) {
		std::cout << "ClapTrap " + _name + " cant attack, no hitpoints and/or energy!" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "ClapTrap " + _name + " attacks " + target + " causing " + std::to_string(_attackDamage) + " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->isActive() == false) {
		std::cout << "ClapTrap " + _name + " cant repair, no hitpoints and/or energy!" << std::endl;
		return ;
	}
	_hitPoints = _hitPoints + amount;
	_energyPoints--;
	std::cout << "ClapTrap " + _name + " has been repaired for " + std::to_string(amount) + "hp!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints = _hitPoints - amount;
	if (_hitPoints < 0)
		_hitPoints = 0;
	std::cout << "ClapTrap " + _name + " takes " + std::to_string(amount) + " points of damage!" << std::endl;
}

bool	ClapTrap::isActive( void )
{
	if (_energyPoints > 0 && _hitPoints > 0)
		return (true);
	return (false);
}