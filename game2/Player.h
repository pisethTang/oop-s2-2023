#ifndef PLAYER_H
#define PLAYER_H

#include "MapEntity.h"
#include "Treasure.h"
#include "Obstacle.h"

class Player: public MapEntity{
    public:
        Player(int x, int y): MapEntity(x,y,'P') { }
        bool foundTreasure(const Treasure& treasure) const {
            // check if player had found treasure baed on position
            std::tuple<int, int> treasurePos = treasure.getPosition();
            std::tuple<int, int> playerPos = getPosition();
            if (std::get<0>(playerPos) == std::get<0>(treasurePos)
            && std::get<1>(treasurePos) == std::get<1>(playerPos)) return true;
            return false;
        }
        bool foundObstacle(const Obstacle& obstacle) const {
            // check if player had found treasure baed on position
            std::tuple<int, int> obstaclePos = obstacle.getPosition();
            std::tuple<int, int> playerPos = getPosition();
            if (std::get<0>(playerPos) == std::get<0>(obstaclePos)
            && std::get<1>(obstaclePos) == std::get<1>(playerPos)) return true;
            return false;
        }

};


#endif