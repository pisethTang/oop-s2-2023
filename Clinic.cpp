#include "Clinic.h"
#include <iostream>

// Constructors
// Clinic::Clinic(std::string name, int max_size)
//     :name(name), max_num_cages(max_size){}
Clinic::Clinic(std::string name, int max_size){
    this -> name = name;
    this -> max_num_cages = max_size;
    this -> cages = new Cage[max_size]; // a default constructor will be called to dynamically allocate the array of objects type Cage 
}

Clinic::Clinic()
    :Clinic("", 0){}

// Setters
void Clinic::setNumber_of_cages(int s){
    this -> max_num_cages = s;
}
void Clinic::setClinicName(std::string n){
    this -> name = n;
}

// Getters
int Clinic::getCapacity(){
    return max_num_cages;
}


std::string Clinic::getName(){
    return name;
} // returns the clinic's name
Cage* Clinic::getCages(){
    
    return cages;
} // returns the array of cages currently in the clinic



 // returns the number of cages currently in the clinic
int Clinic::getNumber_of_cages(){
    int counter = 0;

    for(int i=0;i<max_num_cages; i++){
        if(cages[i].getName() != "") counter++;
        else break;
    }
    return counter;
}

// add cages
bool Clinic::addCage(Cage new_cage){
    int current_capacity = getNumber_of_cages();
    if(current_capacity >= max_num_cages) return false;
    
    current_capacity++;
    // else 
    cages[current_capacity-1] = new_cage;
    return true;
}

Clinic::~Clinic(){
    std::cout << "Clinic destroyed!" <<std::endl;
    delete[] cages;
}




