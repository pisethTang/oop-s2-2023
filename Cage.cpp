#include "Cage.h"
#include <iostream>
#include <string>


// Constructors
Cage::Cage(std::string newName, int newNumber)
    :name(newName), ID(newNumber)
    {}

Cage::Cage()
    :name(""), ID(0){}

// setters
void Cage::setName(std::string name){
    this -> name = name;
}

void Cage::setID(int ID){
    this -> ID = ID;
}


//  getters
std::string Cage::getName(){
    return name;
}

int Cage::getIDnum(){
    return ID;
}

Cage::~Cage(){
    // std::cout << "Cage destroyed!" <<std::endl;
}