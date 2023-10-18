#include "GameEntity.h"


GameEntity::GameEntity(int x, int y, char type)
    : position(x, y), type(type) {}

GameEntity::GameEntity()
    : GameEntity(0,0, 'N'){}

std::tuple<int, int> GameEntity::getPos(){
    // return position;
    // we need to override the output operator <<
    return {std::get<0>(position), std::get<1>(position)};
}

char GameEntity::getType(){
    return type;
}

