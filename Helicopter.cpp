#include "Helicopter.h"


Helicopter::Helicopter(int w, std::string n)
    :AirCraft(w)
{
    this -> name = n;
}

Helicopter::Helicopter(){

}
void Helicopter::fly(int headwind, int minutes){
    int excess_weight = weight - 5670;
    if(headwind < 40){
        if(excess_weight >= 0){
            fuel = fuel - (0.2 * minutes) - (0.01 * excess_weight * minutes);
        }
        else{
            fuel = fuel - (0.2 * minutes);
        }
    }
    else{
        if(excess_weight >= 0){
            fuel = fuel - (0.4 * minutes) - (0.01 * excess_weight* minutes) ;
        }
        else{
            fuel = fuel - (0.4 * minutes);
        }
    }
    // flight finished 
    
    //If a flight would result in the Helicopter finishing with less than 20% 
    // fuel it will not take off and fly, wont use fuel, 
    // and will not increment numberOfFlights. 
    if(fuel <= 20){
        fuel = 100;
    }
    else{ // >= 20% of fuel
    numberOfFlights++;
    }

}

void Helicopter::set_name(std::string name){
    this -> name = name;
}

std::string Helicopter::get_name(){
    return name;
}
