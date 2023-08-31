#ifndef PARKING_LOT_H
#define PARKING_LOT_H
#include "Vehicle.h"

class ParkingLot{
    private:
        int max_capacity;
        Vehicle** vehicles;
        int current_capacity;
    public:
        ParkingLot(int max_capacity);
        ParkingLot();

        int getCount(); //returns the current capacity
        virtual void parkVehicle(Vehicle* vehicle);
        virtual void unparkVehicle(int ID);

        ~ParkingLot();


};



#endif