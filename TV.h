#ifndef TV_H
#define TV_H
#include "Appliance.h"
class TV: public Appliance{
    private:
        double screenSize;
    public:
        TV(int powerRating, double screenSize);
        TV();

        void setScreenSize(double screenSize); // set screen size in inches
        double getScreenSize();  // get size of TV

        double getPowerConsumption();

        ~TV();

};


#endif 
