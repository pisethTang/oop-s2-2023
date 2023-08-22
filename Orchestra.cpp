#include "Musician.h"
#include "Orchestra.h"

Orchestra::Orchestra() // default
    : size(0)
{}

Orchestra::Orchestra(int size,  Musician* musicians) //user-defined
{ 
    this -> size = size;
    this -> musicians = new Musician[size];
}

int Orchestra::get_current_number_of_members(){
    int* current_size = new int(0);
    return *current_size;
}

bool Orchestra::has_instrument(std::string instrument){
    int current_size = get_current_number_of_members();
    Musician* members = get_members();
    for(int i=0; i<current_size;i++){
        if (instrument == members[i].get_instrument()) return true;
    }
    return false;
};

// returns the array of members of the orchestra
Musician* Orchestra::get_members(){
    return musicians;
}

// returns true and adds new musician to orchestra if the orchestra is not full
bool Orchestra::add_musician(Musician new_musician)
{       
    Musician* members = get_members();
    int current_size = get_current_number_of_members();


    // if the current size is greater than the max size
    if (current_size > size) return false;

    // add new_musician to the members array and return true
    (current_size)++;
    members[current_size+1] = new_musician;   

    return true;
};

// ~Orchestra(){
//     delete[] members;
//     std::cout << "Orchestra destroyed!" << std::endl;
// }