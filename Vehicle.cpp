#include <ctime>
#include <iostream>
#include "Vehicle.h"

// Constructor
Vehicle::Vehicle(int ID)
{   
    this -> ID = ID;
    // std::cout << "In Vehicle's constructor" << std::endl;
    timeOfEntry = time(nullptr);
}


Vehicle::Vehicle(): Vehicle(0){
    // std::cout << "Default constructor\n";
}



int Vehicle::getParkingDuration(){
    time_t end_park = time(nullptr);
    int timeElapsed = end_park - timeOfEntry;
    return timeElapsed;
}


// GetID
int Vehicle::getID(){
    return ID;
}

// //  returns the duration of parking
// int Vehicle::getParkingDuration(Vehicle* vehicle){
    
// }

// Vehicle::~Vehicle(){
//     time_t end_park = time(nullptr);
//     // std::cout << end_park - timeOfEntry << std::endl;
// }
