#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include "Vehicle.h"



class Motorbike: public Vehicle{
    public:
        Motorbike();
        int getParkingDuration(); //returns an integer representing the number of seconds that the vehicle has been parked in the lot.

        ~Motorbike();


};



#endif