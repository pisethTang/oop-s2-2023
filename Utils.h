#ifndef UTILS_H
#define UTILS_H
#include <random>
#include <tuple>
#include <time.h>
#include <cmath>


class Utils{
    public:
        static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight){
            srand(time(nullptr));
            int r1 = rand() % gridWidth;
            int r2 = rand() % gridHeight;
            return std::tuple<int, int> {r1,r2};
        }

        static double calculateDistance(std::tuple<int , int> pos1, std::tuple<int , int> pos2){
            return sqrt(pow(std::get<0>(pos1) - std::get<0>(pos2), 2) + 
            pow(std::get<1>(pos1) - std::get<1>(pos2), 2));
        }
};



#endif