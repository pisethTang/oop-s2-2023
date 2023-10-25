#ifndef TREASURE_HUNT_GAME_H
#define TREASURE_HUNT_GAME_H
#include <iostream>
#include "MapEntity.h"
#include "MapUtils.h"
#include <random>
#include <vector>
#include "Player.h"
#include "algorithm"

class TreasureHuntGame{
    private:    
        std::vector<MapEntity*> mapEntities;
    public:
        std::vector<MapEntity*> getMapEntities(){return mapEntities;}

        void setMapEntities() { }

        std::vector<MapEntity*> generateMap(int numTreasures, int numObstacles, int numPlayers, int mapWidth, int mapHeight){
            // create the specified number of treasure, players and obstacles within the map
            for (int i=0;i<numTreasures; i++){    
                std::tuple<int , int> randomPos = MapUtils::generateRandomPos( mapWidth, mapHeight);
                mapEntities.push_back(new Treasure(std::get<0>(randomPos), std::get<1>(randomPos)));
            }
            for (int i=0;i<numObstacles; i++){    
                std::tuple<int , int> randomPos = MapUtils::generateRandomPos( mapWidth, mapHeight);
                mapEntities.push_back(new Obstacle(std::get<0>(randomPos), std::get<1>(randomPos)));
            }

            for (int i=0;i<numPlayers; i++){    
                std::tuple<int , int> randomPos = MapUtils::generateRandomPos( mapWidth, mapHeight);
                mapEntities.push_back(new Player(std::get<0>(randomPos), std::get<1>(randomPos)));
            }
            
            // shuffle
            std::random_device rd;

            std::mt19937 g(rd());

            std::shuffle(mapEntities.begin(), mapEntities.end(), g);

           

            return mapEntities;
        }

        void playGame(int maxMoves){
            for (int i=0;i<maxMoves;i++){
                // move all the players on one of the four random position
                for (auto entity: mapEntities){
                    if (entity -> getSymbol() == 'P'){ // if it is a player
                        Player* player = dynamic_cast<Player*>(entity);// cast entity to player
                        char direction[] = {'N', 'E', 'S', 'W'};
                        std::random_device rd;
                        std::mt19937 g(rd());
                        char randomDirection = direction[std::uniform_int_distribution<int>(0,3)(g)];
                        MapUtils::moveInDirection(player->getPosition(),  randomDirection);
                    }
                }

                // check if the player has found a treasure or encountered any obstacle (print appropariate message)
                for (auto entity: mapEntities){
                    if (entity -> getSymbol() == 'P'){ // try to find the players
                        Player* player = dynamic_cast<Player*>(entity); // cast entity to player
                        for(auto entity: mapEntities){
                            if (entity -> getSymbol() == 'T'){
                                Treasure* treasure = dynamic_cast<Treasure*>(entity);
                                if(player -> foundTreasure(*treasure)){
                                    std::cout << "Congratulation! Someone's found the treasure! (:" <<std::endl;
                                    std::cout << "Thank you for playing!\n";
                                    exit(0);
                                }
                            }
                            else if (entity -> getSymbol() == 'O'){
                                Obstacle* obstacle = dynamic_cast<Obstacle*>(entity);
                                if(player -> foundObstacle(*obstacle)){
                                    std::cout << "Someone's bumped into an obstacle!" << std::endl;
                                    char direction[] = {'N', 'E', 'S', 'W'};
                                     std::random_device rd;
                                    // Use the Mersenne Twister engine for randomness
                                    std::mt19937 g(rd());

                                    // Choose a random direction
                                    char randomDirection = direction[std::uniform_int_distribution<int>(0, 3)(g)];

                                    MapUtils::moveInDirection(player -> getPosition(),  randomDirection);
                                }
                            }

                        }

                    }
                }



            }
            std::cout << "No one found the treasure within the time limit!" << std::endl;
        }

};



#endif
