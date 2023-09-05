#ifndef FRIDGE_H
#define FRIDGE_H

#include "Appliance.h"

class Fridge: public Appliance{
    private:
        double volume;
    public:
        Fridge(int powerRating, double volume);
        Fridge();

        void setVolume(double volume);
        double getVolume();

        double getPowerConsumption();

        ~Fridge();

};


#endif 