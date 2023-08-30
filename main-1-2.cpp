#include <iostream>
#include "ParkingLot.h"
#include "Vehicle.h"
#include "Car.h"
#include "Motorbike.h"
#include "Bus.h"
#include <ctime>

using namespace std;

void menu(){
    cout << "Let's start choosing the types of vehicles:\n"
         << "1. Car\n" 
         << "2. Motorbike\n"  
         << "3. Bus\n" << endl;
}

int main(){
    int num_vehicle;
    cout << "Enter the number of vehicles you want to park: ";
    cin >> num_vehicle;
    int i=0;
    cout << "You have chosen " << num_vehicle << " vehicles!\n";
    menu();
    int c;
    Vehicle** vehicles = new Vehicle*[num_vehicle];

    ParkingLot park_lot(10);
    main();
    

    park_lot

    return 0;
}