#include "TV.h"

TV::TV(int powerRating, double screenSize)
{
    this -> powerRating = powerRating;
    this -> screenSize = screenSize;
}

TV::TV(){
    this -> powerRating = 0;
    this -> screenSize = 0.0;
}

void TV::setScreenSize(double screenSize){
    this -> screenSize = screenSize;
}

double TV::getScreenSize(){
    return screenSize;
}

double TV::getPowerConsumption(){
   return (powerRating * (screenSize/10));
   
}


TV::~TV(){

}