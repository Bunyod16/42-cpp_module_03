#include <iostream>
#include "ClapTrap.hpp"

void testEnergy( void ) {
    ClapTrap bob("testEnergy");

    bob.attack("Some Dude");
    bob.attack("Some Dude");
    bob.attack("Some Dude");
    bob.attack("Some Dude");
    bob.attack("Some Dude");
    bob.attack("Some Dude");
    bob.attack("Some Dude");
    bob.attack("Some Dude");
    bob.attack("Some Dude");
    bob.attack("Some Dude");
    bob.attack("Some Dude");
}

void testHp( void ) {
    ClapTrap bob("testHp");

    bob.takeDamage(1);
    bob.takeDamage(3);    
    bob.takeDamage(4);    
    bob.takeDamage(2);
    bob.attack("Some Dude");
}

void testRepair( void ) {
    ClapTrap bob("testAttack");
    
    bob.takeDamage(5);
    bob.beRepaired(5);
    bob.takeDamage(5);
    bob.beRepaired(5);
    bob.takeDamage(5);
    bob.beRepaired(5);
    bob.attack("Some Dude");
}

int main(void)
{
    testEnergy();
    testHp();
    testRepair();
}