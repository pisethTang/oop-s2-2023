#ifndef BUS_H
#define BUS_H
#include <ctime>
#include "Vehicle.h"


class Bus: public Vehicle{
    public:
        Bus();
        int getParkingDuration(); //returns an integer representing the number of seconds that the vehicle has been parked in the lot.

        ~Bus();


};



#endif