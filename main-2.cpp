#include <iostream>
#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"


int main(){
    // create Ship and Mine objects
    Ship ship; // (0,0)
    Mine mine; // (0,0)
    // std::tuple<int, int> S1 = ship.getPos();
    // std::cout << std::get<0>(S1) << ", " << std::get<1>(S1) <<std::endl;
    // call their functions
    ship.move(1, 2); // (0+1, 0+2) = (1,2)
    mine.explode();
    std::tuple<int, int> S =  ship.getPos();
    std::cout << std::get<0>(S) << ", " << std::get<1>(S) <<std::endl;

    
    Explosion explosion(2,3);
    explosion.apply(ship); // Ship's position = (-1,-1) 
                                    // Ship's type = 'X'
    std::cout << "Ship's position: " << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) <<std::endl;
    std::cout << "Ship's type: " << ship.getType() << std::endl;

    return 0;
}