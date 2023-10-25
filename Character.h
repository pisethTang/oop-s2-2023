#ifndef CHARACTER_H
#define CHARACTER_H
#include "Cell.h"
#include "Effect.h"


class Character: public Cell, Effect{
    public: 
        Character(int x, int y): Cell(x,y,'C'){ } 
        void move(int dx, int dy){
            setPos(dx + std::get<0>(position), dy + std::get<1>(position));
        }

        // void apply(Cell& cell){ } 

};



#endif