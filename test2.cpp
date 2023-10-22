#include <iostream>

#include "Ship.h"
#include "Mine.h"
#include <cassert>

int main(){
        // Test Ship, Mine, and Explosion classes
    Ship myShip(1, 1);
    Mine myMine(5, 5);

    // Test move() for Ship
    myShip.move(2, 3);

    // Check that Ship position is updated correctly
    assert(std::get<0>(myShip.getPos()) == 3);
    assert(std::get<1>(myShip.getPos()) == 4);

    // Test explode() for Mine
    Explosion explosion = myMine.explode();

    // Check that Mine type is updated to 'X' after explode()
    assert(myMine.getType() == 'X');

    // Test apply() for Explosion on Ship
    explosion.apply(myShip);

    // Check that Ship position is set to (-1, -1) after applying Explosion
    assert(std::get<0>(myShip.getPos()) == -1);
    assert(std::get<1>(myShip.getPos()) == -1);

    // Check that Ship type is set to 'X' after applying Explosion
    assert(myShip.getType() == 'X');

    return 0;
}