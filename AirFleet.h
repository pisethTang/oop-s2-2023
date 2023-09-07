#ifndef AIRFLEET_H
#define AIRFLEET_H

#include "AirCraft.h"

class AirFleet: AirCraft{
    private:
        AirCraft** fleet;
    public:
        AirFleet();
        AirFleet();

        AirCraft** get_fleet();

};


#endif