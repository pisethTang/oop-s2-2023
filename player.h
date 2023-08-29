#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player{
    protected:
        std::string name;
        int health;
        int damage;
    public:
        Player(std::string name, int health, int damage);
        void attack(Player* opponent, int damage);
        void takeDamage(int damage);
        
        // Setters
        void setHealth(int health);
        void setName(std::string name);
        void setDamage(int damage);

        // Getters
        int getHealth();
        std::string getName();
        int getDamage();


        // Destructor
        ~Player();


};



#endif