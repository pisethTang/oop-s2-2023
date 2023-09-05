#include "Fridge.h"


Fridge::Fridge(int powerRating1, double volume){
    this->powerRating = powerRating1; // use the this keyword
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