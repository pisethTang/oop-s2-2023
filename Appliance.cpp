#include "Appliance.h"

Appliance::Appliance(int powerRating)
    :powerRating(powerRating)
    {}

Appliance::Appliance()
    :powerRating(0), isOn(false)
    {}

Appliance::set_powerRating(int powerRating)
    : powerRating(powerRating)
{}    

Appliance::turnOff(){
    isOn = false;
}

Appliance::turnOn(){
    isOn  = true;
}

int Appliance::get_powerRating(){
    return powerRating;
}

