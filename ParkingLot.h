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
        void parkVehicle(Vehicle* vehicle);
        void unparkVehicle(int ID);

        int countOverstayingVehicles(int maxParkingDuration); // in seconds
        //returns the number of vehicles that have overstayed for 15 seconds

        


         ~ParkingLot();


};



#endif