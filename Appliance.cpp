#include "Appliance.h"

Appliance::Appliance(int powerRating)
    :powerRating(powerRating)
    {}

Appliance::Appliance()
    :powerRating(0), isOn(false)
    {}

void Appliance::set_powerRating(int powerRating)
{
     this -> powerRating  = powerRating;
 }
void Appliance::turnOff(){
    isOn = false;
}

void Appliance::turnOn(){
    isOn  = true;
}

int Appliance::get_powerRating(){
    return powerRating;
}

