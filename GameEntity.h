#ifndef GAME_ENTITY_H
#define GAME_ENTITY_H

#include <tuple>

class GameEntity{
    protected:
        std::tuple<int, int> position;
        char type;
    public:
        GameEntity(int x, int y, char type): position(x, y), type(type){ }
        GameEntity(): GameEntity(0,0, 'N') { }

        // Getters
        std::tuple<int, int> getPos(){return {std::get<0>(position), std::get<1>(position)};}
        char getType(){return type;}


        // setters
        void setPos(int x, int y){
            std::get<0>(position) = x;
            std::get<1>(position) = y;
            // std::tie(x,y) = position; // unpack elements

        }

        void setType(char type){
            this -> type = type;
        }


        ~GameEntity(){ }

};





#endif