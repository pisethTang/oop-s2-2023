#ifndef UTILS_H
#define UTILS_H

#include <tuple>
#include <cmath>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
// https://cplusplus.com/reference/cstdlib/rand/


class Utils{
    private:
    public:
        static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2){
            return sqrt(pow(std::get<0>(pos1) - std::get<0>(pos2),2) + pow(std::get<1>(pos1) - std::get<1>(pos2), 2));
        }
        static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight){
            srand(time(nullptr));
            int r1 = rand() % gridWidth + 1; // generate random integers between 1 to 10 
            int r2 = rand() % gridHeight + 2; // generate random integers between 2 to 10
            return {r1,r2};
        } // returns a random position
        
        Utils(){ }
        ~Utils(){ }



};




#endif