#ifndef GAME_H
#define GAME_H

#include <vector>
#include "GameEntity.h"
#include "Utils.h"
#include "Ship.h"
#include "Mine.h"


class Game{
    private:   
        std::vector<GameEntity*> entities;
        int numShipsRemaining;

    public:
        void set_entities(){ };
        std::vector<GameEntity*> get_entities(){ return entities;}

        std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight){
            this -> numShipsRemaining = numShips;
            for (int i=0;i<numShips;i++){
                std::tuple<int , int> randomPos = Utils::generateRandomPos(gridWidth, gridHeight);
                int r1 = std::get<0>(randomPos);
                int r2 = std::get<1>(randomPos);
                entities.push_back(new Ship(r1, r2));
            }

            for(int i=0;i<numMines;i++){
                std::tuple<int , int> randomPos = Utils::generateRandomPos(gridWidth, gridHeight);
                int r1 = std::get<0>(randomPos);
                int r2 = std::get<1>(randomPos);
                entities.push_back(new Mine(r1, r2));
            }

            return entities;
        }
        bool compare(std::tuple<int, int> pos1, std::tuple<int, int> pos2){
            if (std::get<0>(pos1) == std::get<0>(pos2) &&
                std::get<1>(pos1) == std::get<1>(pos2)) return true;
            return false;
        }

        bool allShipsDestroyed(){
            if (numShipsRemaining <= 0) return true; // all ships have been destroyed
            // still some ships left
            for (auto entity: entities){
                // we need to just check the 
                if(entity -> getType() == 'S'){// Is it a ship?
                    Ship* ship = dynamic_cast<Ship*>(entity); // cast entity to ship
                    if (compare(ship -> getPos(), {-1,-1})) return false; // if so, is the ship destroyed? 
                }
            }
            // all ships have been destroyed
            return true;
        }

        void gameLoop(int maxIterations, double mineDistanceThreshold){
            int i =0;
            bool checkShips = allShipsDestroyed();
            while ((i<maxIterations) && (checkShips == true)){
                // call move(1,0) on all ship objects
                for(auto entity: entities){
                    if (entity -> getType() == 'S'){
                        Ship* ship = dynamic_cast<Ship*>(entity);
                        ship -> move(1,0);
                    }
                }

                for (auto entity: entities){
                    if(entity -> getType() == 'S'){
                        Ship* ship = dynamic_cast<Ship*>(entity);
                        for(auto entity: entities){
                            if(entity -> getType() == 'M'){
                                Mine* mine = dynamic_cast<Mine*>(entity);
                                if(Utils::calculateDistance(ship -> getPos(), mine -> getPos()) < mineDistanceThreshold){
                                    Explosion explosion = mine -> explode();
                                    explosion.apply(*ship);
                                    numShipsRemaining--;
                                }
                            }
                        }
                    }
                }

                i++;
            }
        }


};



#endif