#ifndef UTILS_H
#define UTILS_H
#include <tuple>
#include <ctime>
#include <random>
#include <math.h>


class Utils{
    public:
        static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight){
            // srand(time(nullptr));
            int r1 = rand() % gridWidth + 1;
            int r2 = rand() % gridHeight + 1;
            return {r1, r2};
        }

        static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2){
            return sqrt(pow(std::get<0>(pos2) - std::get<1>(pos1), 2) +
             pow(std::get<1>(pos2) - std::get<1>(pos1), 2)
             );
        }
};



#endif