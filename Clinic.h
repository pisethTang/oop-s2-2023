#ifndef CLINIC_H
#define CLINIC_H
#include "Cage.h"
#include <string>


class Clinic{
    private:
        std::string name; // Clinic's name
        Cage* cages; // a list of cages
        int max_num_cages; // maximum number of cages in 
    public:
        // Constrcutor
        Clinic(std::string name, int max_size);

        // Default Constructor
        Clinic();
        
        
        // Setters
        void setNumber_of_cages(int s);
        void setClinicName(std::string n);



        // Getters
        int getCapacity();
        std::string getName(); // returns the clinic's name
        Cage* getCages(); // returns the array of cages currently in the clinic
        
        int getNumber_of_cages(); // returns the number of cages currently in the clinic


        // add cages if the maximum size hasn't been reached.
        bool addCage(Cage new_cage); 
        
        // Destructor
        ~Clinic();


};



#endif