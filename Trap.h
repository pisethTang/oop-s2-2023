#ifndef TRAP_H
#define TRAP_H
#include "Cell.h"
#include "Effect.h"


class Trap: public Cell, Effect{
    public:
        Trap(int x, int y): Cell(x,y, 'T'){}
        
};



#endif