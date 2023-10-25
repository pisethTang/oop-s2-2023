#include <iostream>
#include "Cell.h"
#include "Utils.h"



int main(){
    Cell cell(1,1, 'c');
    Cell cell1(1,2, 'd');
    std::cout << Utils::calculateDistance(cell.getPos(), cell1.getPos()) <<std::endl;

    return 0;
}