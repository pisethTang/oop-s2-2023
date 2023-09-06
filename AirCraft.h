#ifndef AIRCRAFT_H
#define AIRCRAFT_H

class AirCraft{
    protected:
        int weight; // weight of the aircraft
        float fuel; // fuel percentage, initially 100%
        int numberOfFlights; // initially 0
    public:
        AirCraft(int w); // creates an aircraft with weight w
        AirCraft(); // constructor does nothing

        void refuel(); //resets fuel back to 100%
        virtual void fly(int headwind, int minutes); // headwind in km/h and minutes (time flying)
        // every time the method is called, the numbeOfFlights increases by 1


        // setters
        void set_weight(int weight);
        void set_fuel(float fuel);
        void set_numberOfFlights(int numbeOfFlights);


        // getters
        int get_weights();
        int get_fuel();
        int set_numberOfFlights();

        
};


#endif 