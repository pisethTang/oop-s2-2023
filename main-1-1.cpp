#include <iostream>
#include "AirCraft.h"

using namespace std;

int main(){
    AirCraft plane(300); // set the plane to 300 tons
    plane.set_numberOfFlights(10); 
    cout << "The plane's weight is "<< plane.get_weight() <<endl;
    cout << "Number of flights: " << plane.get_numberOfFlights() << endl;
    plane.fly(10, 20); // the plane has been flown once
    cout << "Number of flights after a flight: " << plane.get_numberOfFlights() << endl; 
    
    return 0;
}