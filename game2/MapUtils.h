#ifndef MAPS_UTILS_H
#define MAPS_UTILS_H

#include <tuple>
#include <random>
#include <time.h>

class MapUtils{
    public:
        static bool isWithinBounds(const std::tuple<int , int>& position, int mapWidth, int mapHeight){
            //returns true if the given position is within the bound of the map
            bool p1 = std::get<0>(position) >= 0 && std::get<0>(position) <= mapWidth;
            bool p2 = std::get<1>(position) >= 0 && std::get<1>(position) <= mapHeight;
            if (p1 && p2 == true) return true;
            return false; 
        }

        // this should be void to unneccessarily return anything
        static std::tuple<int, int> moveInDirection(const std::tuple<int, int>& position, char direction) {
        int x = std::get<0>(position);
        int y = std::get<1>(position);

        switch (direction) {
            case 'N':
                y++;
                break;
            case 'S':
                y--;
                break;
            case 'E':
                x++;
                break;
            case 'W':
                x--;
                break;
            // Handle other directions if needed
            default:
                // No change for unknown direction
                break;
        }

    return std::make_tuple(x, y);
}

        static std::tuple<int , int> generateRandomPos(int mapWidth, int mapHeight){
            int r1 = rand() % mapWidth + 1;
            int r2 = rand() % mapHeight + 1;
            return std::tuple<int, int>{r1,r2};
        }
};



#endif