#ifndef GAME_ENTITY_H
#define GAME_ENTITY_H

#include <tuple>

class GameEntity{
    private:
        std::tuple<int, int> position;
        char type;
    public:
        GameEntity(int x, int y, char type): position(x, y), type(type){ }
        GameEntity(): GameEntity(0,0, 'N') { }

        std::tuple<int, int> getPos(){return {std::get<0>(position), std::get<1>(position)};}
        char getType(){return type;}

        ~GameEntity(){ }

};





#endif