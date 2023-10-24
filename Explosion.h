#ifndef EXPLOSION_H
#define EXPLOSION_H
#include "GameEntity.h"
#include "Effect.h"



class Explosion: public GameEntity{
    public:
        Explosion(int x, int y): GameEntity(x,y,'E'){ 
            // GameEntity(x,y,'E');
        }
        Explosion(): Explosion(0,0){ }

        void apply(GameEntity& entity){
            entity.setPos(-1,-1);
            entity.setType('X');
        }





};




#endif