#include <iostream>
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
class A{
    private:
        int x;
        std::time_t timer;
    public:
        A(int q){
            cout << "The constructor has been called! Timer should start..." <<endl;
            this -> x = q;
            timer = time(nullptr);
            std::cin.get();
        }
        A():A(0){}

        int getX(){
            return x;
        }


        ~A(){
        time_t endTime = time(nullptr);
        
        int elapsedSeconds = endTime - timer;
       
        std::cout << "Time elapsed: " << elapsedSeconds << " seconds\n"; 
        }


};

int main(){
    // int num_vehicle;
    // cout << "Enter the number of vehicles you want to park: ";
    // cin >> num_vehicle;
    // int i=0;
    // cout << "You have chosen " << num_vehicle << " vehicles!\n";
    // menu();
    // int c;
    // Vehicle** vehicles = new Vehicle*[num_vehicle];
    // while(i<num_vehicle){
    //     cin >> c;
    //     switch(c){
    //         case 1: 
    //             vehicles[i] = new Car();
    //             break;
    //         case 2: 
    //             vehicles[i] = new Motorbike();
    //             break;
    //         case 3: 
    //             vehicles[i] = new Bus();
    //             break;
    //         default: break;
    //     }
    //     i++;
    // }

    // // iterate over the array and then call the getParkingDuration() to print the parking duration for each vehicle
    // for(int i=0;i<num_vehicle;i++){
    //     // vehicles[i].getParkingDuration();
    //     std::cout << "Vehicle " << i << "'s parking duration = " << vehicles[i] -> getParkingDuration() << "\n"; 
    // }



    // for(int i=0;i<num_vehicle;i++) delete vehicles[i];
    // delete[] vehicles;

    // for(int i=0; i<num_vehicle;i++){
    //     vehicles[i].~vehicles[i];
    // }
    
  

  




    return 0;
}