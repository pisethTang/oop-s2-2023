#include "Musician.h"

Musician::Musician()
    :instrument("null"), experience(0)    //use the default initializer list instead of manually assign in the branch
{
    // instrument = "null";
    // experience = 0;
}

Musician::Musician(std::string instrument, int experience){ // user-defined constructor
    this -> instrument = instrument;
    this -> experience = experience;
}

// Define the getters for both members of class Musician

std::string Musician::get_instrument(){
    return instrument;
}

int Musician::get_experience(){
    return experience;
}
