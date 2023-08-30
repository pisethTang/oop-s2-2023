#include "Vehicle.h"
#include "Car.h"
#include <ctime>
#include <cstdint>
#include <iostream>


Car::Car()
    {
        timeOfEntry = time(nullptr);
    }


int Car::getParkingDuration(){
    time_t end_park = time(nullptr);
    int timeElapsed = end_park - timeOfEntry;
    return timeElapsed * 0.9;
}


Car::~Car(){
//     time_t end = time(nullptr);
//     std::cout << "Car's parking duration: " << static_cast<int>(end  - timeOfEntry) << std::endl;
}

// int Car::getParkingDuration(Vehicle* car){
    
// }   