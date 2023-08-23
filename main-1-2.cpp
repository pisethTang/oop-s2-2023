#include<iostream>
#include "Cage.h"
#include "Clinic.h"


int main(){
    // Create some cages with occupant's name and id number
    Cage c1("Seth1", 123);
    Cage c2("Seth2", 321);
    Cage c3("Seth3", 345);
    Cage c4("Seth4", 321);
    Cage c5("Seth5", 211);
    Cage c6("Seth6", 811);

    // Manually create a static-based array of objects of multi-variate type Cage
    Cage c[] = {c1,c2,c3,c4,c5,c6};
    // Creating a clinic entity
    int maxCapacity = 4;
    Clinic cli("Clinic1", maxCapacity);
    for(int i=0;i<maxCapacity;i++){
        bool add = cli.addCage(c[i]);
        int x = cli.getNumber_of_cages();
        if(add) 
        {
            // std::cout << "Current size: " << x <<std::endl;
            std::cout << "Added cage " << i+1 << " to the clinic.\n";

        }
        else 
        {
            std::cout << "\n-----Maximum capacity reached!----\n" << std::endl;
        }
    }







    return 0;
}