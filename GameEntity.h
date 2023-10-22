#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <tuple>
#include <iostream>

class GameEntity{
    protected:
        std::tuple<int, int> position; // 2d position of the entity
        char type; // type of entity
    public:
        GameEntity(int x, int y, char type)
                    : position(x, y), type(type) {}
        GameEntity()
                    : GameEntity(0,0, 'N'){}
        std::tuple<int, int> getPos(){
            // return position;
            // we need to override the output operator <<
             return {std::get<0>(position), std::get<1>(position)};
        }
        
        char getType(){ return type;}


        void setPos(int x, int y){
            std::get<0>(position) = x;
            std::get<1>(position) = y;
        }
        void setType(char type){
            this -> type = type;
        }

        virtual ~GameEntity(){
            
        }
};





#endif