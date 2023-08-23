#include <iostream>
#include "Cage.h"

using namespace std;

int main(){
    Cage c1;
    std::cout << "Testing default constructor" << std::endl;
    std::cout << "Name: " << c1.getName() << std::endl;
    std::cout << "ID: " << c1.getIDnum() << std::endl;

    Cage c2("Seth", 1906208);
    std::cout << "Testing user-defined constructor" << std::endl;
    std::cout << "Name: " << c2.getName() << std::endl;
    std::cout << "ID: " << c2.getIDnum() << std::endl;

    

    return 0;
}