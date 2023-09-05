#include "House.h"
#include <iostream>

House::House(int numAppliances){
    this -> numAppliances = numAppliances;
    this -> appliances = new Appliance*[numAppliances];
    count_appliances = 0;
}

House::House(){ // can only add 1 appliance
    this -> numAppliances = 0;
    this -> appliances = new Appliance*[0];
}

bool House::addAppliance(Appliance* appliance){
    int flag = false;
    // return false only when there is no space left, otherwise, add the appliance into the array and then return true
    if (count_appliances >= numAppliances) return false;
    appliances[count_appliances] = appliance;
    count_appliances++; 
    return true;
}


    // We don't need to find the current number of appliances because we don't need to delete it
    // If we want to remove applianaces then we have two choices:
    // 1. Define a current_capacity member in the House class
    // 2. Define a current_capacity function that increments whenever a condition is met, and this leads to 
    // another problem of finding a condition on which the counter increments when it is met.

double House::getTotalPowerConsumption(){
    int total_power = 0;
    for(int i=0;i<numAppliances;i++){
        total_power  = total_power + appliances[i] -> getPowerConsumption();
    }
    return total_power;
}



House::~House(){
    for(int i=0;i<numAppliances;i++){
        delete appliances[i];
    }
    delete appliances;
    // std::cout << "Deleted House!\n";
}