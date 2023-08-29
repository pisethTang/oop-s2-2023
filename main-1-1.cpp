#include <iostream>
#include "player.h"
#include "wizard.h"
#include "warrior.h"


int main(){
    // Wizard wizard (name, health, damage, mana)
    Wizard wizard("Gandalf", 100, 20, 50);

    // Warrior warrior(name, health,damage, weapon)
    Warrior warrior("Aragorn", 120, 25, "Sword");


    std::cout << "Let the battle begin" <<std::endl;
    while(wizard.getHealth() > 0 && warrior.getHealth() > 0){
        wizard.castSpell(&warrior); //wizards initiates the attack
        if(warrior.getHealth() > 0){
            warrior.swingWeapon(&wizard);
        }
    }

    if (wizard.getHealth() > 0){
        std::cout << wizard.getName() << "wins!" <<std::endl;
    }
    else{
        std::cout << warrior.getName() << "wins!" <<std::endl;
    }


    return 0;
}