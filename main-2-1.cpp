#include <iostream>
#include "Fridge.h"
#include "Appliance.h"

int main(){
    // Appliance* a1;
    // a1->set_volume(50)
    Fridge* fridge = new Fridge();
    fridge -> setVolume(100);
    std::cout << "Initial volume: " << fridge -> getVolume() << std::endl;
    fridge -> setVolume(150);
    std::cout << "New volume: " << fridge -> getVolume() << std::endl;



    return 0;
}
