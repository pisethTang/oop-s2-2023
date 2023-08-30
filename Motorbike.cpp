#include <ctime>
#include <cstdint>
#include <iostream>
#include "Motorbike.h"
#include "Vehicle.h"

Motorbike::Motorbike(int ID)
    {
        this -> ID = ID;
        timeOfEntry = time(nullptr);
    }

Motorbike::Motorbike()
    :Motorbike(0){}

int Motorbike::getParkingDuration(){
    time_t end_park = time(nullptr);
    int timeElapsed = end_park - timeOfEntry;
    return timeElapsed * 0.85;
}


Motorbike::~Motorbike(){
    // time_t end = time(nullptr);
    // std::cout << "Entry time: " << timeOfEntry << "\n";
    // std::cout << "End time: " <<end << "\n";
    // std::cout << "Motorbike parking's duration: " << static_cast<int>(end - timeOfEntry) << std::endl;
}