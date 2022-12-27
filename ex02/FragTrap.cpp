#include "FragTrap.hpp"
#include <iostream>
#include <string>

// Constructors
FragTrap::FragTrap( void ) : ClapTrap("", 100, 100, 30)
{
	std::cout << "\e[0;33mDefault Constructor called of FragTrap\e[0m" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "\e[0;33mConstructor called of FragTrap\e[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    _name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;

	std::cout << "\e[0;33mCopy Constructor called of FragTrap\e[0m" << std::endl;
}

// Destructor
FragTrap::~FragTrap()
{
	std::cout << "\e[0;31mDestructor called of FragTrap\e[0m" << std::endl;
}


// Operators
FragTrap & FragTrap::operator=(const FragTrap &assign)
{
    _name = assign._name;
    _hitPoints = assign._hitPoints;
    _energyPoints = assign._energyPoints;
    _attackDamage = assign._attackDamage;
	return *this;
}

// Methods
void    FragTrap::highFiveGuys( void )
{
    std::string line;

    if (this->isActive() == false) {
		std::cout << "FragTrap " + _name + " cant high five, no hitpoints and/or energy!" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "FragTrap " + _name + " is requesting for a high five (y/n): ";
    std::getline(std::cin, line, '\n');
    if (line == "y") {
	    std::cout << "FragTrap " + _name + " has received your high five!" << std::endl;
    }
    else {
	    std::cout << "FragTrap " + _name + " has not received a high five." << std::endl;
    }
}