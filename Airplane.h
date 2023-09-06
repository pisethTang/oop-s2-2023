#ifndef AIRPLANE_H
#define AIRPLANE_H
#include "AirCraft.h"

class Airplane: public AirCraft{
    private:
        int numPassengers;
    public:
        Airplane(int w, int p); //create an airplane with wieght w and passengers p
        Airplane();
        int get_numPassengers();
        void fly(int headwind, int minutes);
        void reducePassengers(int x); //reduce passenger list by x

};



#endif