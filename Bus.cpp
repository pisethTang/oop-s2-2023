#include "Bus.h"
#include "Vehicle.h"
#include <ctime>
#include <iostream>


Bus::Bus(int ID)
    {
        this -> ID = ID;
        timeOfEntry = time(nullptr);
    }

Bus::Bus()
    :Bus(0){}

int Bus::getParkingDuration(){
    time_t end_park = time(nullptr);
    int timeElapsed = end_park - timeOfEntry;
    return timeElapsed * 0.75;
}


Bus::~Bus(){
    // time_t end_park = time(nullptr);
    // std::cout << "Bus's parking duration: " << static_cast<int>(end_park - timeOfEntry) << std::endl;
}