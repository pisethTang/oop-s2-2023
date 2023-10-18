#include "Utils.h"

Utils::Utils(){

}

std::tuple<int, int> Utils::generateRandomPos(int gridWidth, int gridHeight){
    srand(time(nullptr));
    int r1 = rand() % gridWidth + 1; // generate random integers between 1 to 10 
    int r2 = rand() % gridHeight + 2; // generate random integers between 2 to 10

    return {r1,r2};
}

double Utils::calculateDistace(std::tuple<int, int> pos1, std::tuple<int, int> pos2){
    return sqrt(pow(std::get<0>(pos1) - std::get<0>(pos2),2) + pow(std::get<1>(pos1) - std::get<1>(pos2), 2));
}




Utils::~Utils(){

}

