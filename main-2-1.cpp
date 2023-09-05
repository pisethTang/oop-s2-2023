#include <iostream>
#include "Fridge.h"
#include "Appliance.h"

int main(){
    // Appliance* a1;
    // a1->set_volume(50)
    Fridge* a1 = new Fridge(50,50);
    a1 -> set_powerRating(100);
    a1 -> set_volume(50);

    std::cout << "---Testing Fridge's inheritance of Appliance class-----" << std::endl;
    std::cout << "What is the fridge's power consumption?\n";
    std::cout << a1 -> getPowerConsumption() << " W." <<std::endl;
    std::cout << "What is the fridge's volume?\n";
    std::cout << a1 -> get_volume() << " litres" <<std::endl;
    a1 -> set_volume(243);
    std::cout << "New volume: " << a1 -> get_volume() << " litres\n";



    return 0;
}
