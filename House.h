#ifndef HOUSE_H
#define HOUSE_H
#include "Appliance.h"

class House: public Appliance{
    private:
        Appliance** appliances;
        int numAppliances; // maximum number of appliances in the house

    public:
        House(int numAppliance);
        House();

        bool addAppliance(Appliance* appliance); // add an Appliance object to the House if there is space, else return false

        double getTotalPowerConsumption(); //returns the total power consumption of all aplliances in the House


        ~House();

};





#endif