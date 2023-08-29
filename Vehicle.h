#ifndef VEHICLE_H
#define VEHICLE_H
#include <ctime>

class Vehicle{
    protected:
        int ID;
        std::time_t timeOfEntry; // the time at which the vehicle entered the parking lot, and it should be intialized to the time when the object is created!
    public:
        // constructor
        Vehicle(int ID);

        // getter
        int getID();

        int getParkingDuration(Vehicle* vehicle); //returns an integer representing the number of seconds that the vehicle has been parked in the lot.

        ~Vehicle();




};




#endif