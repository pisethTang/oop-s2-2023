#ifndef OBSTACLE_H
#define OBSTACLE_H
#include "MapEntity.h"


class Obstacle: public MapEntity{
    public:
        Obstacle(int x, int y): MapEntity(x,y,'O') { }
        
};


#endif
