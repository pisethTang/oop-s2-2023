#include <iostream>
#include "Appliance.h"

// using namespace std;

int main(){
    Appliance* a1 = new Appliance(100);
    a1 -> set_powerRating(20);
    a1 -> turnOn(); 
    std::cout << a1 -> get_powerRating() << std::endl;    
    std::cout << "Is the appliance on? " << std::endl;
    if(a1 -> get_isOn()) std::cout << "Yes!"<<std::endl;
    else std::cout << "No!" << std::endl;


    delete a1;
    return 0;
}