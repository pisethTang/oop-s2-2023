#include<iostream>
#include "Character.h"
#include "Trap.h"



int main(){
    Character charac(1,2);
    Trap trap(2,3);

    trap.setActive(true);
    trap.apply(charac);
    std::cout << charac.getType() << std::endl;

    return 0;
}