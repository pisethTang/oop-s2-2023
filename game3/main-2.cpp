#include <iostream>
#include "Mine.h"
#include "Ship.h"



int main(){
    Ship ship(1,2);
    Mine mine(2,3);

    std::cout << "Ship's position: (" << std::get<0>(ship.getPosp()) 
    << "," << std::get<1>(ship.getPosp()) << ")" << std::endl;
    std::cout << "Ship's type: " << ship.getType() << std::endl;
    Explosion explosion = mine.explode();
    explosion.apply(ship);
    std::cout << "\n--------------------After explosion----------------------\n";

    std::cout << "Ship's position: (" << std::get<0>(ship.getPosp()) 
    << "," << std::get<1>(ship.getPosp()) << ")" << std::endl;
    std::cout << "Ship's type: " << ship.getType() << std::endl;

    return 0;
}