#include "GameEntity.h"


GameEntity::GameEntity(int x, int y, char type)
    : position(x, y), type(type) {}

GameEntity::GameEntity()
    : GameEntity(0,0, 'N'){}

std::tuple<int, int> GameEntity::getPos(){
    // return position;
    // we need to override the output operator <<
    std::ostream &operator<<(std::ostream &os, const std::tuple<int, int> & position){
        os << position.
    }
}
char GameEntity::getType(){
    return type;
}

