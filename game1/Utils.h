#ifndef UTILS_H
#define UTILS_H

#include <tuple>
#include <random>
#include <ctime>
#include <math.h>
#include <chrono>

class Utils{
    private:

    public:
        static std::tuple<int, int> generateRandomPosition(int gridWidth, int gridHeight){
            // rand() generates random number between 0 and RAND_MAX (max size of integer)
            int rand1 = rand()%gridWidth + 1; // generate a random number between 1 and gridWdith
            int rand2 = rand()%gridHeight + 2; // generate a random number between 2 and gridHeight
            
            // return {rand1, rand2};
            return std::tuple<int, int> {rand1, rand2};

        }

        static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2){
            return sqrt(pow(std::get<0>(pos1) - std::get<0>(pos2), 2) + pow(std::get<1>(pos1) - std::get<1>(pos2), 2));
        } // returns the euclidean distance between pos1 and pos2 


};




#endif