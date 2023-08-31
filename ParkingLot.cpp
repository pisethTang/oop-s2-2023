#include "ParkingLot.h"
// #include "Vehicle.h"
#include <iostream>

ParkingLot::ParkingLot(int max_capacity)
    :max_capacity(max_capacity)
    {
        current_capacity = 0;
        vehicles = new Vehicle*[max_capacity];
    }

ParkingLot::ParkingLot()    
    :max_capacity(0)
    {}

int ParkingLot::getCount(){ // returning the count of vehicles being parked right now
    return current_capacity;
}
void ParkingLot::parkVehicle(Vehicle* vehicle){ // the current capacity should increase after each of the function call
    if(current_capacity >= max_capacity){
        std::cout << "The lot is full\n";
    }
    else{
        current_capacity++;
        vehicles[current_capacity-1] = vehicle;
    }

}


void ParkingLot::unparkVehicle(int ID) {
    bool flag = false;
    int index = -1;

    for (int i = 0; i < current_capacity; i++) {
        if (vehicles[i]->getID() == ID) {
            flag = true;
            index = i;
            break;
        }
    }

    if (flag) {
        delete vehicles[index];
        // Shift remaining vehicles in the array
        for (int i = index; i < current_capacity - 1; i++) {
            vehicles[i] = vehicles[i + 1];
        }
        current_capacity--;
    } else {
        std::cout << "Vehicle not in the lot" << std::endl;
    }
}

ParkingLot::~ParkingLot(){
    for(int i=0;i<current_capacity;i++) delete vehicles[i];
    delete[] vehicles;
    
}
