#include <iostream>
#include "TV.h"
#include "Appliance.h"

int main(){
    TV* tv1 = new TV(200, 16.5);
    std::cout << "TV's old screen size: " << tv1 -> getScreenSize()  << " inches."<< std::endl; 
    tv1 -> setScreenSize(20.5);
    std::cout << "New size: " << tv1 -> getScreenSize() << " inches." <<std::endl;
    std::cout << "TV's power consumption: " << tv1 -> getPowerConsumption() << " W." << std::endl;

    delete tv1;
    return 0;
}