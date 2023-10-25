#ifndef TRAP_H
#define TRAP_H
#include "Cell.h"
#include "Effect.h"


class Trap: public Cell, Effect{
    private:
        bool active;
    public:
        Trap(int x, int y): Cell(x,y, 'T'){}
        bool isActive(){return active;}

        void setActive(bool acti){ this -> active = acti;}
        void apply(Cell& cell){
            // modify cell type to T
            cell.setType('T');
            setActive(false);
        }


};



#endif