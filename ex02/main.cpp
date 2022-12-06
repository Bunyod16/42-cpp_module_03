#include <iostream>
#include "FragTrap.hpp"

void testEnergy( void ) {
    FragTrap bob("testEnergy");

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
    FragTrap bob("testHp");

    bob.takeDamage(1);
    bob.takeDamage(3);    
    bob.takeDamage(4);    
    bob.takeDamage(2);
    bob.attack("Enemy");
}

void testRepair( void ) {
    FragTrap bob("Bob");
    
    bob.takeDamage(5);
    bob.beRepaired(5);
    bob.takeDamage(5);
    bob.beRepaired(5);
    bob.takeDamage(5);
    bob.beRepaired(5);
    bob.attack("Enemy");
}

void testCopy( void ) {
    FragTrap bob("Bob");
    FragTrap sam("Sam");

    sam.attack("Enemy");
    sam = bob;
    bob.takeDamage(100);
    bob.attack("Enemy");
    sam.attack("Enemy");
}

void testHighFive( void ) {
    FragTrap bob("Bob");

    bob.highFiveGuys();
}

int main(void)
{

    testEnergy();
    testHp();
    testRepair();
    testCopy();
    testHighFive();
}