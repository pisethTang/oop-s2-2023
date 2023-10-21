#include <iostream>
#include "GameEntity.h"
#include "Utils.h"

void printTuple(std::tuple<int, int> T){
    std::cout << "("  << std::get<0>(T) << ", " << std::get<1>(T) << ")";
}

int main(){
    // generate random positoons and calculate distances between them
    // Utils u;
    std::tuple<int, int> origin = {0,0};
    int gridWidth = 10;
    int gridHeight = 10;
    for(int i=0;i<10;i++){
        std::tuple<int, int> p = Utils::generateRandomPos(gridWidth, gridHeight);
        std::cout << "D{(0,0),";
        printTuple(p);
        std::cout << "} = " << Utils::calculateDistance(origin,p) << std::endl;
        // std::cout << "Enter to continue:";
        // std::cin.get();
        // usleep(890000);

        
    }



    


    return 0;
}