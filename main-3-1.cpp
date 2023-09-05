#include <iostream>
#include "House.h"
#include "TV.h"
#include "Fridge.h"

int main(){
    int number_of_appliances = 10;
    // creating a House object
    House* h1 = new House(number_of_appliances);
    

    //// Adding appliances until it reaches the maximum capacity
    // Add 5 TVs
    for(int i=0;i<5;i++){
        h1 -> addAppliance(new TV(20 + 3*i, 10.21+i)); 
    }

    // Add 5 Fridges
    for(int i=0;i<5;i++){
        h1 -> addAppliance(new Fridge(20 + i, 200 + i));
    }

    std::cout << "\nTrying to add another fridge-----------\n";

    if(h1 -> addAppliance(new Fridge(9, 10))){
        std::cout << "Added Fridge!" << std::endl;
    }
    else{
        std::cout << "Maximum capacity!!" << std::endl;
    }
    std::cout << "Adding 5 TVs and 5 Fridges!\n";

    // get total power consumption in that house
    std::cout << "Total power consumption: " << h1 -> getTotalPowerConsumption() << " W\n";


    delete h1;

    // h1 = nullptr
    // std::cout << "Test!" << std::endl;
    return 0;
}