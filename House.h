#ifndef HOUSE_H
#define HOUSE_H
#include "Appliance.h"

class House: public Appliance{
    private:
        Appliance** appliances;
        int numAppliances; // maximum number of appliances in the house
        int count_appliances;
    public: 
        House(int numAppliance);
        House();

        bool addAppliance(Appliance* appliance); // add an Appliance object to the House if there is space, else return false

        // int get_current_number_of_appliances();
        double getTotalPowerConsumption(); //returns the total power consumption of all aplliances in the House


        ~House();

};





#endif