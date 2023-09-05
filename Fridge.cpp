#include "Fridge.h"


Fridge::Fridge(int powerRating, double volume){
    this->powerRating = powerRating;
    this-> volume = volume;
}
    

Fridge::Fridge(){
    this->powerRating = 0;
    this-> volume = 0.0;
}

void Fridge::set_volume(double volume){
    this -> volume = volume;
}

double Fridge::get_volume(){
    return volume;
}

double Fridge::getPowerConsumption(){
    return powerRating* 24 * (volume/100);
}

Fridge::~Fridge(){

}