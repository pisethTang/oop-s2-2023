#include <string>
#include "player.h"
#include <iostream>

//Constructor
Player::Player(std::string name, int health, int damage)
    :name(name), health(health), damage(damage){}

void Player::attack(Player* opponent, int damage){
    opponent -> health = opponent -> health - damage;
}

void Player::takeDamage(int damage){
    this -> health =  this -> health - damage;
    std::cout << name << " takes " <<damage << " damage. Reamining health: " << health << "\n";
}


// Setters

void setHealth(std::string health){
    this -> health = health;
}

void setName(std::string name){
    this -> name = name;
}
void setDamage(int damage){
    this -> damage = damage;
}
// Getters
int getHealth(){
    return health;
}

std::string getName(){
    return name;
}

int getDamage(){
    return damage;
}

Player::~Player(){
    delete opponent;
}


