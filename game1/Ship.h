#ifndef SHIP_H
#define SHIP_H
#include "GameEntity.h"


class Ship: public GameEntity{
    public:
        Ship(int x, int y): GameEntity(x,y,'S'){ }
        Ship(): Ship(0,0) { }
        void move(int dx, int dy){
            std::get<0>(position) += dx;
            std::get<1>(position) += dy;
        }

        ~Ship(){ }


};



#endif