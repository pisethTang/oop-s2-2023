#include "AirCraft.h"

AirCraft::AirCraft(int w)
{
    this -> weight = w;
    fuel = 0.0;
    numberOfFlights = 0;
}

AirCraft::AirCraft(){

}

void AirCraft::refuel(){
    fuel = 100.0;
}

void AirCraft::fly(int headwind, int minutes){
    numberOfFlights++;
}

void AirCraft::set_weight(int weight){
    this -> weight = weight;
}

void AirCraft::set_fuel(float fuel){
    this -> fuel = fuel;
}

void AirCraft::set_numberOfFlights(int numberOfFlights){
    this -> numberOfFlights = numberOfFlights;
}

int AirCraft::get_weight(){
    return weight;
}

float AirCraft::get_fuel(){
    return fuel;
}

int AirCraft::get_numberOfFlights(){
    return numberOfFlights;
}
