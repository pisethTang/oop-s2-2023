#ifndef AIRPLANE_H
#define AIRPLANE_H
#include "AirCraft.h"

class Airplane: public AirCraft{
    private:
        int numPassengers;
    public:
        Airplane(int w, int p); //create an airplane with wieght w and passengers p
        Airplane();
        int get_numPassengers();
        void fly(int headwind, int minutes);
        void reducePassengers(int x); //reduce passenger list by x

};



#endif




/*Prac Exam 3 - PR02 Questions
Started: 6 Sep at 13:10
Quiz instructions
Notes on submission
The class for each problem must be submitted in two files, called <classname>.h and <classname>.cpp. Note that you also have to write a main function that calls the class member functions with some parameters to ensure they work! The main function for each problem must be submitted in a separate file of its own, called main-x-x.cpp. 

Practical Exam Restrictions
This is a practical exam, so there are restrictions that will be enforced:

You must attend your enrolled practical - or have sought prior permission to attend a different session.
A student ID card must be displayed at all times.
Mobile phones must be turned off.
Personal effects may be kept in a bag, but this must be placed on the floor.
No talking or looking at other students' work.
All work must be your own! You must not use other people's work in your answers to these questions.
The questions will be released 5 minutes past the start of the session and will be open for 100 minutes. 
Students may not leave the exam until 45 minutes after the exam begins.
Note: this is a timed quiz. You may check the remaining time you have at any point while taking the quiz by pressing the keyboard combination SHIFT, ALT, and T... Again: SHIFT, ALT, and T...
 
Flag question: Spacer
Question 1 - Base Class
1-1. (15 marks) Define and implement a class named AirCraft that has the following constructor and attributes:

AirCraft();
AirCraft(int w);             // creates an Aircraft with weight w

int weight;                  // the weight of AirCraft
float fuel;                  // fuel percentage, initially 100%
int numberOfFlights;         // initially 0

void refuel();               // Resets fuel back to 100%
void fly(int headwind, int minutes); // headwind in km/h and minutes (time flying)
In your AirCraft class, include a default constructor, without parameters, which does nothing.

Define the fly method as a virtual function. Every time the method is called, increase the numberOfFlights by 1.

Define the refuel() method so that when it's called, fuel is reset to 100.

Following the principles of encapsulation and information hiding, set the proper access modifiers for the attributes and provide methods to access the object’s data. You need to set the weight, fuel, and number of flights, as well as get the attributes values. The get and set function names should be the attribute name prefixed with "get_" or "set_" respectively

Save your code in AirCraft.cpp and AirCraft.h, so we can check that your code compiles. Implement a program with a main method that tests your code in a file called main-1-1.cpp.

 

Question 2 - Inheritance and Polymorphism
2-1. (15 marks) Define and implement a class named Helicopter, which represents a special kind of aircraft. It is to be defined by inheriting from the AirCraft class. The Helicopter class has the following constructor:

Helicopter(int w, string n)     // creates a Helicopter with weight w and name n

string name;                    // name of the Helicopter
void fly(int headwind, int minutes);
Helicopter has a default constructor that does nothing.

Following the principles of encapsulation and information hiding, set the proper access modifiers for the attributes and provide methods to access the object’s data. The get and set function names should be the attribute name prefixed with "get_" or "set_" respectively.

Your Helicopter class should define the fly() method, which was inherited from AirCraft. When a helicopter flies, it will use 0.2% of its fuel for every minute it flies, unless there is a headwind of 40km/hour or more, and then it will use 0.4% of its fuel for each minute it flies. For every kilogram over 5670kg, it will use 0.01% extra fuel each minute.

E.g. if fuel is at 80%, and a 5690kg helicopter flies for 10 minutes into a 45km/hour headwind, the fuel will be 80% minus (0.4 * 10 minutes) minus (0.01 * 20kg * 10 minutes) = 74%.

After each flight, increment numberOfFlights by 1.

If a flight would result in the Helicopter finishing with less than 20% fuel it will not take off and fly, wont use fuel, and will not increment numberOfFlights. 

Save your code in Helicopter.cpp and Helicopter.h, so we can check that your code compiles. Implement a program with a main method that tests your code in a file called main-2-1.cpp.

 

2-2. (10 marks) Define and implement a class named Airplane. It is to be defined by inheriting from the AirCraft class. The Airplane class has the following constructor and behaviour:

Airplane();                       
Airplane(int w, int p);           // Create Airplane with weight w and passengers p

int numPassengers;               // number of passengers on the Airplane

void reducePassengers(int x);     // reduce passenger list by x
int get_numPassengers();
void fly(int headwind, int minutes);          
The function reducePassengers removes x passengers from the numPassengers attribute. There are no negative passengers on an aircraft. If the amount of numPassengers is below 0, it should set the numPassengers attribute to 0. The get_numPassengers function returns the numPassengers attribute. The other methods should behave the same as for the parent class.

There is no setter for numPassengers.

Your Airplane class should define the fly() method, which was inherited from AirCraft. When a plane flies, it will use 0.3% of its fuel for every minute it flies, unless there is a headwind of 60km/hour or more, and then it will use 0.5% of its fuel for each minute it flies. For every passenger, it will use 0.001% extra fuel each minute. E.g. if fuel is at 95%, and a plane with 100 passengers flies for 120 minutes into a 65km/hour headwind, the fuel will be 95% minus (0.5 * 120) minus (0.001 * 100 * 120) = 23%. After each flight, increment numberOfFlights by 1. If a flight would result in the Airplane finishing with less than 20% fuel it will not take off and fly and will not increment numberOfFlights.. 

Save your code in Airplane.cpp and Airplane.h, so we can check that your code compiles. Implement a program with a main method that tests your code in a file called main-2-2.cpp.

 

Question 3 - Aggregation
3-1. (10 marks) Define and implement a class named AirFleet that has the following public constructor and behaviour:

AirFleet()                          
/* creates an air fleet containing pointers to 5 AirCraft objects as an array; 
*/

// AirCraft **fleet;
// AirCraft **get_fleet()      // returns the array of pointers to the five aircraft objects
// When the constructor is called, it should create and add the following objects to fleet:

// Airplane(20, 10);
// Helicopter(10000, "BlackHawk"); 
// AirCraft(5000);
// Helicopter(100, "WhiteHawk");
// Airplane(15, 20);
// You will need to make sure that these objects are instantiated correctly and assigned to the required locations appropriately in the same order as mentioned above. Following the principles of encapsulation and information hiding, set the proper access modifiers for the attributes and provide methods to access the object’s data.

// Save your code in AirFleet.cpp and AirFleet.h, so we can check that your code compiles. Implement a program with a main method that tests your code in a file called main-3-1.cpp.

// Submit all files.*/