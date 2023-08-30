#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"


class Car: public Vehicle{
    public:
        Car(int ID);
        Car();
        int getParkingDuration(); //returns an integer representing the number of seconds that the vehicle has been parked in the lot.


        ~Car();

};



#endif