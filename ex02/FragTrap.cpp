#include "FragTrap.hpp"
#include <iostream>
#include <string>

// Constructors
FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "\e[0;33mDefault Constructor called of FragTrap\e[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    name = copy.name;
	hitPoints = copy.hitPoints;
	energyPoints = copy.energyPoints;
	attackDamage = copy.attackDamage;

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
    name = assign.name;
    hitPoints = assign.hitPoints;
    energyPoints = assign.energyPoints;
    attackDamage = assign.attackDamage;
	return *this;
}

// Methods
void    FragTrap::highFiveGuys( void )
{
    std::string line;

    if (this->isActive() == false) {
		std::cout << "FragTrap " + name + " cant high five, no hitpoints and/or energy!" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "FragTrap " + name + " is requesting for a high five (y/n): ";
    std::getline(std::cin, line, '\n');
    if (line == "y") {
	    std::cout << "FragTrap " + name + " has received your high five!";
    }
    else {
	    std::cout << "FragTrap " + name + " has not received a high five.";
    }
}