#ifndef MINE_H
#define MINE_H

#include "GameEntity.h"
#include "Explosion.h"

class Mine: public GameEntity{
    public:
        Mine(int x, int y): GameEntity(x,y, 'M'){ }
        Mine(): Mine(0,0){ }
        Explosion explode(int x, int y){
            // returns an Explosion object
            
            // std::cout << "Mine exploded!" << std::endl;
            // change Mine type to 'X'
            
            return Explosion(x,y);
        }

};






#endif