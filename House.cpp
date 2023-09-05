#include "House.h"

House::House(int numAppliances){
    this -> numAppliances = numAppliances;
    this -> appliances = new Appliance*[numAppliances];
}

House::House(){ // can only add 1 appliance
    this -> numAppliances = 0;
    this -> appliances = new Appliance*[0];
}

bool House::addAppliance(Appliance* appliance){
    int flag = false;


    return false;
    
}




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
}