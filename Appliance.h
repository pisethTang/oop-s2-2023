#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance{
    protected:
        int powerRating;
        bool isOn;
    public:
        
        // defined
        Appliance(int powerRating);
        
        // default constructor sets the power rating to 0
        Appliance();


        // setters
        void set_powerRating(int powerRating); //set the appliance power's consumption
        // set isOn to true
        void turnOn();
        //set isOn to false
        void turnOff();

        // getters
        int get_powerRating(); // what is the appliance's power rating?
        bool get_isOn(); // is the appliance on?
        

        virtual double getPowerConsumption(){
            return 0.0;
        }

        virtual ~Appliance();





};



#endif 