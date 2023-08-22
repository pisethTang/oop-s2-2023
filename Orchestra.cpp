#include "Musician.h"
#include "Orchestra.h"

Orchestra::Orchestra() // default
    // : size(0), musicians(new Musician)
{
    this -> size = 0;
    this -> musicians = new Musician[size];
}

Orchestra::Orchestra(int size) //user-defined
{ 
    this -> size = size;
    this -> musicians = new Musician[size];
}


Orchestra::Orchestra(int size, Musician* musicians) //user-defined
{ 
    this -> size = size;
    this -> musicians = musicians;
}

// int* Orchestra::get_current_number_of_members(){
//     int* current_size = new int(0);
//     return current_size;
// }
int Orchestra::get_current_number_of_members(){
    int counter = 0;
    for(int i=0;i<size;i++){
        // check whether 
        if(musicians[i].get_experience() != 0) counter++;
        else break;
    }
    return counter;
}


bool Orchestra::has_instrument(std::string instrument){
    int current_size = get_current_number_of_members();
    // Musician* members = get_members();
    for(int i=0; i<current_size;i++){
        if (instrument == musicians[i].get_instrument()) return true;
    }
    return false;
}


// returns the array of members of the orchestra
Musician* Orchestra::get_members(){
    return musicians;
}



// returns true and adds new musician to orchestra if the orchestra is not full
bool Orchestra::add_musician(Musician new_musician)
{       
    int current_size = get_current_number_of_members();
    
    // if the current size is greater than the max size
    if (current_size >= size) return false;

    else{
    // add new_musician to the members array and return true
    musicians[current_size] = new_musician;
    current_size++;

    return true;
    }
    
};

Orchestra::~Orchestra(){
    delete[] musicians;
    // std::cout << "Orchestra destroyed!" << std::endl;
}