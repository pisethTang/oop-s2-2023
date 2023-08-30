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
    cout << "You have chosen " << num_vehicle << " vehicles!\n Now pick one type of vehicle(1-3) and then press Enter\n";
    menu();
    ParkingLot park_lot(10);
    int c;
    // int* v_types = new int[num_vehicle];
    Vehicle** vehicles = new Vehicle*[num_vehicle];
   
    while(i<num_vehicle){
        cin >> c;
        // *(v_types+ i) = c;
        switch(c){
            case 1: 
                vehicles[i] = new Car(1);
                break;
            case 2: 
                vehicles[i] = new Motorbike(2);
                break;
            case 3: 
                vehicles[i] = new Bus(3);
                break;
            default: 
                cout << "Pick either 1,2, or 3!\n";
                break;
        }
        i++;
    }
    
    bool t = false;
    while(!t){
        char y;
        cout << "There are "<< park_lot.getCount() << " vehicles in the lot.\n"
        << "Do you want to park a vehicle?(y/n)";
        cin >> y;
        
        if(y == 'y'){
            int x, d;
            d = x;
            cout << "Which vehicle to park? "; cin >> x;
            cout << "\nParking vehicle " << x << "\n";
            park_lot.parkVehicle(vehicles[x]);
            
        }
        else break;
    }
    for(int i=0;i<num_vehicle;i++) delete vehicles[i];
    delete[] vehicles;

    return 0;
}