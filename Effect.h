#ifndef EFFECT
#define EFFECT

#include "GameEntity.h"


class Effect{
    public:
        virtual void apply(GameEntity& entity){ }

        virtual ~Effect(){ 
            // std::cout << "Hello\n";
        }
};



#endif