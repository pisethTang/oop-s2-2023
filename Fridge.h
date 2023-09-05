#ifndef FRIDGE_H
#define FRIDGE_H

#include "Appliance.h"

class Fridge: public Appliance{
    private:
        double volume;
    public:
        Fridge(int powerRating, double volume);
        Fridge();

        void set_volume(double volume);
        double get_volume();

        double getPowerConsumption();

        ~Fridge();

};


#endif 