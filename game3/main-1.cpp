#include <iostream>


#include "GameEntity.h"
#include "Utils.h"

int main(){
    GameEntity entity(1, 2, 'A');
    int gridWidth = 10;
    int gridHeight = 10;
    std::tuple<int , int> randomPos = Utils::generateRandomPos( gridWidth,  gridHeight);
    std::cout << Utils::calculateDistance(entity.getPosp(), randomPos);
    std::cout << std::endl;
    return 0;
}