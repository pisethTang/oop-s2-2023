#include <iostream>
#include "MapUtils.h"
#include "MapEntity.h"

void printPos(std::tuple<int, int> position){
    std::cout << "Position: (" << std::get<0>(position) << ", " << std::get<1>(position) << ")" << std::endl;
}


int main(){
    MapEntity entity(1,1, 'M');
    int mapWidth = 10;
    int mapHeight = 10;
    printPos(entity.getPosition());
    std::cout << "----------Check if the entity is within bound------------" << std::endl;
    bool withinBound = MapUtils::isWithinBounds(entity.getPosition(),  mapWidth, mapHeight);
    if(withinBound){
        std::cout << "entity is within bound\n";
        // return 0;
    }
    std::cout << "entity is not within bound" <<std::endl;

    std::cout << "---------Move entity in certain direction---------" <<std::endl;
    char direction = 'N';
    
    std::tuple<int , int> newPos = MapUtils::moveInDirection(entity.getPosition(), direction);
    int x = std::get<0>(newPos);
    int y = std::get<1>(newPos);
    entity.setPosition(x, y);
    printPos(entity.getPosition());


    return 0;
}
