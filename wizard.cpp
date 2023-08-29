#include <string>
#include <iostream>

#include "wizard.h"
#include "warrior.h"
#include "player.h"


Wizard::Wizard(std::string name, int health, int damage, int mana)
    :Player(name, health, damage)
{
    this -> mana = mana;
}

// Wizard casts spell on the opponent dealing damage based on the mana point 
void Wizard::castSpell(Player* opponent){
    opponent -> health = takeDamage(mana);
    std::cout << name << " casts a spell on " << opponent -> getName() 
    << " for " << damage << " damage." << "\n";
}

void Wizard::setMana(int mana){
    this -> mana = mana;
}

Wizard::~Wizard(){
    // delete opponent;
}