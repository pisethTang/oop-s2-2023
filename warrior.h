#ifndef WARRIOR_H
#define WARRIOR_H
#include "string"
#include "player.h"


class Warrior: public Player{
    private:
        std::string weapon;
    public:
        // constructor
        Warrior(std::string name, int health, int damage, std::string weapon);
        
        // deals damage to the opponent based on the player's weapon's damage points
        void swingWeapon(Player* opponent);

        //Setters
        void setWeapon(std::string weapon);

        // Getters
        std::string getWeapon();


        
        
        ~Warrior();


        
};



#endif