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