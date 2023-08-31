#include <iostream>
#include "ParkingLot.h"
#include "Vehicle.h"
#include "Car.h"
#include "Motorbike.h"
#include "Bus.h"
#include <ctime>

using namespace std;

int main(){
    int num_vehicle = 10;
    ParkingLot park_lot(num_vehicle);
    // Vehicle** Vehicles = new Vehicle*[num_vehicle];
    //  while(i<num_vehicle){
    //     cin >> c;
    //     *(v_types+ i) = c;
    //     int id = 0;
    //     switch(c){
    //         case 1: 
    //             cout << "Enter vehicle #" << i+1 << "'s ID: ";
    //             cin >> id;
    //             Vehicles[i] = new Car(id);
    //             break;
    //         case 2: 
    //             cout << "Enter vehicle #" << i+1 << "'s ID: ";
    //             cin >> id;
    //             Vehicles[i] = new Motorbike(id);
    //             break;
    //         case 3: 
    //             cout << "Enter vehicle #" << i+1 << "'s ID: ";
    //             cin >> id;
    //             Vehicles[i] = new Bus(id);
    //             break;
    //         default: 
    //             cout << "Pick either 1,2, or 3!\n";
    //             break;
    //             exit(0);
    //     }
    //     i++;
    // }
    // park_lot.parkVehicle(Vehicles[0]);
    // park_lot.parkVehicle(Vehicles[1]);
    // park_lot.parkVehicle(Vehicles[2]);
    // park_lot.parkVehicle(Vehicles[3]);
    // park_lot.parkVehicle(Vehicles[4]);
    // park_lot.parkVehicle(Vehicles[5]);
    // park_lot.parkVehicle(Vehicles[6]);
    // park_lot.parkVehicle(Vehicles[7]);
    // park_lot.parkVehicle(Vehicles[8]);
    // park_lot.parkVehicle(Vehicles[9]);
    for (int i = 0; i < 5; i++) {
        park_lot.parkVehicle(new Car());
    }

    for (int i = 0; i < 3; i++) {
        park_lot.parkVehicle(new Bus());
    }

    for (int i = 0; i < 2; i++) {
        park_lot.parkVehicle(new Motorbike());
    }
    int max_duration = 15;
    int overstayingCount = park_lot.countOverstayingVehicles(max_duration);
    cout << "Number of overstaying vehicles: " << overstayingCount << endl;



    return 0;   
}