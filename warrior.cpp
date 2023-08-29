#include <iostream>
#include <string>
#include "warrior.h"
#include "player.h"


// inherits from the Player class's constructor
Warrior::Warrior(std::string name, int health, int damage,std::string weapon)
    :Player(name, health, damage)
{
    this -> weapon = weapon;
}



// deals damage to the opponent based on the player's weapon's damage point
void Warrior::swingWeapon(Player* opponent){
    opponent -> takeDamage(damage);
    std::cout << name <<" swings their " << weapon << " at " << opponent -> getName() << "!" << "\n";
}

void Warrior::setWeapon(std::string weapon){
    this -> weapon = weapon;
}

std::string Warrior::getWeapon(){
    return weapon;
}

Warrior::~Warrior(){
    // delete opponent;
}



