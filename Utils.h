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
        static double calculateDistace(std::tuple<int, int> pos1, std::tuple<int, int> pos2); // returns the euclidean distance between two given possitions 
        static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight); // returns a random position
        Utils();
        ~Utils();



};




#endif