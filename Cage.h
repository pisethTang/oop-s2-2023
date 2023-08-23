#ifndef CAGE_H
#define CAGE_H

#include <string>

class Cage{
    private:
        std::string name;
        int ID;
    public:
        Cage(); //default constructor
        Cage(std::string newName, int newNumber); // constructor defined to ask for ID number and occupant's name

        // Setters
        void setName(std::string name);
        void setID(int ID);

        // Getters
        std::string getName(); // returns the name of the cage occupant
        int getIDnum(); //returns the cage's ID number

        ~Cage();

};




#endif