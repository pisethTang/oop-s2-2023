#include "Musician.h"
#include<iostream>

class Orchestra{
    private:
        int size;
        Musician* musicians;
    public:
        Orchestra(); // default constructor
        Orchestra(int size);
        Orchestra(int size, Musician* musicians); // user-defined constructor

        //returns the number of musicians who have joined the orchestra
        int get_current_number_of_members();

        // returns true if any musician in the orchestra plays the specified instrument
        // otherwise, returns false
        bool has_instrument(std::string instrument);


        // returns the array of members of the orchestra
        Musician *get_members();

        // returns true and adds new musician to orchestra if the orchestra is not full
        bool add_musician(Musician new_musician);

        ~Orchestra();
        // ~Orchestra();




};