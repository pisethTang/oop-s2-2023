#ifndef HELICOPTER_H
#define HELICOPTER_H
#include <string>
#include "AirCraft.h"


class Helicopter: public AirCraft{
    private:
        std::string name;
    public:
        Helicopter(int w, std::string n);
        Helicopter();
        void fly(int headwind, int minutes);
        // setters
        void set_name(std::string name);
        // getters
        std::string get_name();

};



#endif