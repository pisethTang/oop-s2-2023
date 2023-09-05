#include <iostream>
#include "Fridge.h"
#include "Appliance.h"

int main(){
    // Appliance* a1;
    // a1->set_volume(50)
    Fridge* fridge = new Fridge();
    fridge -> set_volume(100);
    std::cout << "Initial volume: " << fridge -> get_volume() << std::endl;
    fridge -> set_volume(150);
    std::cout << "New volume: " << fridge -> get_volume() << std::endl;



    return 0;
}
