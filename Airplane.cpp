#include "Airplane.h"

Airplane::Airplane(int w, int p)
    :AirCraft(w)
{
    this -> numPassengers = p;
}

Airplane::Airplane()
{

}

int Airplane::get_numPassengers(){
    return numPassengers;
}

void Airplane::fly(int headwind, int minutes){
    bool condition = headwind >= 60;
    if(condition){
        fuel = fuel - (0.3 * minutes) - (0.001 * numPassengers * minutes);
    }
    else{
        fuel = fuel - (0.5 * minutes) - (0.001  * numPassengers * minutes);
    }

    if(fuel < 20){
        fuel = 0;
    }
    else{
        numberOfFlights++;
    }
}

void Airplane::reducePassengers(int x){
    numPassengers = numPassengers - x;
}


