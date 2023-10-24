#include "iostream"
#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"

void printObject(GameEntity& entity){
    // std::cout << "Type              Position" << std::endl;
    std::tuple<int , int> pos = entity.getPos();
    std::cout << "Type<" << entity.getType() << "> : "
    << "(" << std::get<0>(pos)
    << ", " << std::get<1>(pos) << ")" << std::endl;
}


int main(){
    Mine* mine = new Mine(1,2);
    Ship* ship = new Ship(4,-2);

    // std::cout << "Ship's type: " << ship -> getType() << std::endl;
    // std::cout << "Mine's type: " << mine -> getType() << std::endl;
    std::cout << "---------------------------Before explosion-----------------------\n";
    printObject(*mine);
    printObject(*ship);
    // after the mine is exploded, we need to apply the explosion to the ship
    Explosion explosion = mine -> explode();
    std::cout << "---------------------------After explosion-----------------------\n";
    explosion.apply(*ship);
    std::cout << "";
    // std::cout << "Ship's type: " << ship -> getType() << std::get<0>(ship -> getPos()) << std::get<1>(ship -> getPos()) << std::endl;
    // std::cout << "Mine's type: " << mine -> getType() << std::endl;    
    printObject(*mine);
    printObject(*ship);
    delete mine;
    delete ship;
    // delete explosion;

    return 0;
}



/*
Compiler stderr:
source/test-2-1.cpp: In function ‘int main()’:
source/test-2-1.cpp:14:43: error: conversion from ‘Explosion*’ to non-scalar type ‘Explosion’ requested
   14 |     Explosion myExplosion = myMine.explode();
      |                             ~~~~~~~~~~~~~~^~
source/test-2-1.cpp:18:23: error: cannot convert ‘Ship’ to ‘GameEntity*’
   18 |     myExplosion.apply(myShip);
      |                       ^~~~~~
      |                       |
      |                       Ship
In file included from source/Mine.h:4,
                 from source/test-2-1.cpp:3:
source/Explosion.h:15:32: note:   initializing argument 1 of ‘void Explosion::apply(GameEntity*)’
   15 |         void apply(GameEntity* entity){
      |                    ~~~~~~~~~~~~^~~~~~

-------


*/