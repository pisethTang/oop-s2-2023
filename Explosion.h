#ifndef EXPLOSION_H
#define EXPLOSION_H

#include "GameEntity.h"
#include "Effect.h"

class Explosion: public GameEntity{
    private:
        
    public: 
        Explosion(int x, int y): GameEntity(x,y, 'E'){}
        Explosion(): Explosion(0,0){ }
        void apply(GameEntity& entity){
            // Set entity's position to (-1, -1)
            entity.setPos(-1, -1);
            // Set the type to 'X'
            entity.setType('X');
        }

};  







#endif