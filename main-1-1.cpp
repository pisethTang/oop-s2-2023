#include <iostream>
#include "Appliance.h"

using namespace std;

int main(){
    Appliance a1(100);
    a1.set_powerRating(20);
    cout << a1.get_powerRating() << "\n";    


    return 0;
}