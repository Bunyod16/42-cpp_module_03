#include <iostream>
#include "ScavTrap.hpp"

// void testEnergy( void ) {
//     ScavTrap bob("testEnergy");

//     bob.attack("Some Dude");
//     bob.attack("Some Dude");
//     bob.attack("Some Dude");
//     bob.attack("Some Dude");
//     bob.attack("Some Dude");
//     bob.attack("Some Dude");
//     bob.attack("Some Dude");
//     bob.attack("Some Dude");
//     bob.attack("Some Dude");
//     bob.attack("Some Dude");
//     bob.attack("Some Dude");
// }

// void testHp( void ) {
//     ScavTrap bob("testHp");

//     bob.takeDamage(1);
//     bob.takeDamage(3);    
//     bob.takeDamage(4);    
//     bob.takeDamage(2);
//     bob.attack("Some Dude");
// }

// void testRepair( void ) {
//     ScavTrap bob("testAttack");
    
//     bob.takeDamage(5);
//     bob.beRepaired(5);
//     bob.takeDamage(5);
//     bob.beRepaired(5);
//     bob.takeDamage(5);
//     bob.beRepaired(5);
//     bob.attack("Some Dude");
// }

int main(void)
{
    ScavTrap bob("Bob");

    bob.attack("Enemy");
    bob.beRepaired(5);
    bob.beRepaired(5);
    bob.beRepaired(5);
    bob.beRepaired(5);
    bob.beRepaired(5);
    bob.beRepaired(5);
    bob.beRepaired(5);
    bob.beRepaired(5);
    bob.beRepaired(5);
    bob.beRepaired(5);
    bob.beRepaired(5);
    bob.beRepaired(5);
    bob.beRepaired(5);

    // testEnergy();
    // testHp();
    // testRepair();
}