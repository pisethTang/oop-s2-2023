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

void remains(int* X, int length){
    // cout << "Here are the vehicles you chose: \n";
    for(int i=0;i<length;i++){
        cout << *(X + i) << " ";
    }
    cout << endl;
}

int* removeElement(int* arr, int size, int indexToDelete) {
    if (indexToDelete < 0 || indexToDelete >= size) {
        std::cerr << "Invalid index to delete." << std::endl;
        return arr;
    }

    int newSize = size - 1;
    int* newArr = new int[newSize];

    for (int i = 0, j = 0; i < size; ++i) {
        if (i != indexToDelete) {
            newArr[j++] = arr[i];
        }
    }

    delete[] arr;
    return newArr;
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
    int* v_types = new int[num_vehicle];
    Vehicle** Vehicles = new Vehicle*[num_vehicle];
   
    while(i<num_vehicle){
        cin >> c;
        *(v_types+ i) = c;
        int id = 0;
        switch(c){
            case 1: 
                cout << "Enter vehicle #" << i+1 << "'s ID: ";
                cin >> id;
                Vehicles[i] = new Car(id);
                break;
            case 2: 
                cout << "Enter vehicle #" << i+1 << "'s ID: ";
                cin >> id;
                Vehicles[i] = new Motorbike(id);
                break;
            case 3: 
                cout << "Enter vehicle #" << i+1 << "'s ID: ";
                cin >> id;
                Vehicles[i] = new Bus(id);
                break;
            default: 
                cout << "Pick either 1,2, or 3!\n";
                break;
                exit(0);
        }
        i++;
    }

    cout << "\n------------------------Print vehicles info------------------------\n";
    for(int i=0;i<num_vehicle;i++){
        cout << "Vehicle #" << i+1 << "\n";
        cout << "ID: " <<  Vehicles[i] -> getID() << "\n";    
    }

    cout << "\n--------------------------Park vehicle(s)----------------------------\n";
    cout << "Remember: the max capacity is 10\n";
    // menu();

    // remains(v_types, num_vehicle);

    // // Remember that an array index starts from 0
    // int* X = removeElement(v_types, num_vehicle, 2);
    // remains(X, num_vehicle-1);
    
    bool p;
    // for(int i=0;i<num_vehicle;i++){
    //     //display the reamaining vehicles()
    //     remains(v_types, num_vehicle);
    //     cout << "Do you want to park a vehicle? ";
    //     cin >> p;
    //     if(p){
    //         cout << "Please choose a vehicle from above";

    //         park_lot.parkVehicle(Vehicles[i]); 
    //     }
    //     else{
    //         break;
    //     }

    // }
    cout << "Current capacity: " << park_lot.getCount() << "\n";
    park_lot.parkVehicle(Vehicles[0]);
    park_lot.parkVehicle(Vehicles[1]);
    cout << "Current capacity: " << park_lot.getCount() << "\n";

    cout << "\n--------------------------Unpark vehicle(s)----------------------------\n";
    
    park_lot.unparkVehicle(111);
    cout << "Current capacity: " << park_lot.getCount() << "\n";
    /*bool t = false;
    while(!t){
        char y;
        // get_remaining_types(v_types);
        cout << "There are "<< park_lot.getCount() << " vehicles in the lot.\n"
        << "Do you want to park a vehicle?(y/n) ";
        cin >> y;
        
        if(y == 'y'){
            int x;
            
            cout << "Which vehicle to park? "; cin >> x;
            cout << "Parking vehicle" << x << "\n\n";
           
            park_lot.parkVehicle(vehicles[x]);
        }
        else break;
    }*/
    for(int i=0;i<park_lot.getCount();i++) delete Vehicles[i];
    delete[] Vehicles;

    delete[] v_types;

    return 0;
}