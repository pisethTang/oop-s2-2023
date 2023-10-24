#ifndef MINE_H
#define MINE_H
#include "GameEntity.h"
#include "Explosion.h"


class Mine: public GameEntity{
    public:
        Mine(int x, int y): GameEntity(x,y,'M'){ }
        Mine(): Mine(0,0){ }
        Explosion* explode(){
            // set Mine to 'X' after explosion
            setType('X');
            return new Explosion; // return an Explosion object
        }

};




#endif