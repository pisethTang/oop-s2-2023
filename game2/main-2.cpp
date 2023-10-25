#include <iostream>

#include "Player.h"
#include "Obstacle.h"


int main(){
    Player player(1,1);
    Treasure treasure(1,1);
    if(player.foundTreasure(treasure)) std::cout << "Player's found the treasure!" <<std::endl;
    else std::cout << "nope." <<std::endl;
    Obstacle obstacle(1,2);
    std::cout << "Obstacle's symbol: " << obstacle.getSymbol() << std::endl;
    return 0;
}