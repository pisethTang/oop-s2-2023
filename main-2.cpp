#include <iostream>
#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"


int main(){
    // create Ship and Mine objects
    Ship ship; // (0,0)
    Mine mine; // (0,0)
    std::cout << "-----------------Initial Position------------------------" <<std::endl;
    // std::tuple<int, int> S1 = ship.getPos();
    std::cout << "Ship's position: " <<  std::get<0>(ship.getPos()) << ", " 
              << std::get<1>(ship.getPos()) <<std::endl;
    std::cout << "Ship's type: " << ship.getType() <<std::endl;
    // call their functions
    ship.move(1, 2); // (0+1, 0+2) = (1,2)
    std::cout << "---------------Before exploded:---------------" <<std::endl;
    std::cout << "Ship's position: " <<  std::get<0>(ship.getPos()) << ", " 
              << std::get<1>(ship.getPos()) <<std::endl;
    std::cout << "Ship's type: " << ship.getType() <<std::endl;
    
    Explosion explosion = mine.explode();
    explosion.apply(ship); // Ship's position = (-1,-1) 
                                    // Ship's type = 'X'
    std::cout << "---------------After exploded:----------------" << std::endl;
    std::cout << "Ship's position: " << std::get<0>(ship.getPos()) << ", " 
              << std::get<1>(ship.getPos()) <<std::endl;
    std::cout << "Ship's type: " << ship.getType() << std::endl;

    return 0;
}