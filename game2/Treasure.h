#ifndef TREASURE_H
#define TREASURE_H
#include "MapEntity.h"


class Treasure: public MapEntity{
    public:
        Treasure(int x, int y): MapEntity(x,y,'T') { }
        

};



#endif
