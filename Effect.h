#ifndef EFFECT_H
#define EFFECT_H
#include "GameEntity.h"


class Effect{
    public:
        // This function accepts a game entity and applies the effect to the entity.
        virtual void apply(GameEntity& entity) { };

        virtual ~Effect(){
            
        }
};





#endif