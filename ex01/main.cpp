#include <iostream>
#include "ScavTrap.hpp"

void testEnergy( void ) {
    ScavTrap bob("testEnergy");

    bob.attack("Enemy");
    bob.attack("Enemy");
    bob.attack("Enemy");
    bob.attack("Enemy");
    bob.attack("Enemy");
    bob.attack("Enemy");
    bob.attack("Enemy");
    bob.attack("Enemy");
    bob.attack("Enemy");
    bob.attack("Enemy");
    bob.attack("Enemy");
}

void testHp( void ) {
    ScavTrap bob("testHp");

    bob.takeDamage(1);
    bob.takeDamage(3);    
    bob.takeDamage(4);    
    bob.takeDamage(2);
    bob.attack("Enemy");
}

void testRepair( void ) {
    ScavTrap bob("Bob");
    
    bob.takeDamage(5);
    bob.beRepaired(5);
    bob.takeDamage(5);
    bob.beRepaired(5);
    bob.takeDamage(5);
    bob.beRepaired(5);
    bob.attack("Enemy");
}

void testCopy( void ) {
    ScavTrap bob("Bob");
    ScavTrap sam("Sam");

    sam.attack("Enemy");
    sam = bob;
    bob.takeDamage(100);
    bob.attack("Enemy");
    sam.attack("Enemy");
}

void testGuardGate( void ) {
    ScavTrap bob("Bob");

    bob.guardGate();
}

int main(void)
{
    testEnergy();
    testHp();
    testRepair();
    testCopy();
    testGuardGate();
}