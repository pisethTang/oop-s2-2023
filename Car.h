#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"


class Car: public Vehicle{
    public:
        int getParkingDuration(Vehicle* car); //returns an integer representing the number of seconds that the vehicle has been parked in the lot.




};



#endif