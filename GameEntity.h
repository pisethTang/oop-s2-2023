#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <tuple>
#include <iostream>

class GameEntity{
    protected:
        std::tuple<int, int> position; // 2d position of the entity
        char type; // type of entity
    public:
        GameEntity(int x, int y, char type);
        GameEntity();
        std::tuple<int, int> getPos();
        char getType();

};





#endif