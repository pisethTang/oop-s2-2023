#ifndef GAME_H
#define GAME_H
#include <vector>
#include "GameEntity.h"
#include "Ship.h"
#include "Mine.h"
#include "Utils.h"

#include<iostream>

class Game{
    private:
        // store game entities
        std::vector<GameEntity*> entities;
        int numShips;
        int numMines;
        int maxI;
    public:
        // This function propgates the entities vector with ships and mines (data collection)
        std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight){
            // Generate the specified number of ships and mines of random positions
            // and pushing them into entities vector
            this -> numShips = numShips;
            this -> numMines = numMines;
            std::cout << "Start!\n";
            for(int i=0;i<numShips;i++) 
            {   
                    std::tuple<int, int> random_pos = Utils::generateRandomPosition(gridWidth, gridHeight);
                    int r_x = std::get<0> (random_pos);
                    int r_y = std::get<1> (random_pos);
                    entities.push_back(new Ship(r_x, r_y));
            }
            std::cout << "All ships moved in!\n";

            for(int i=0;i<numMines;i++) 
            {   
                    std::tuple<int, int> random_pos = Utils::generateRandomPosition(gridWidth, gridHeight);
                    int r_x = std::get<0> (random_pos);
                    int r_y = std::get<1> (random_pos);
                    entities.push_back(new Mine(r_x, r_y));
            }
            std::cout << "All mines planted!\n";
            return entities;
        }

        // A helper function to compare between two tuples
        bool compare(std::tuple<int, int> pos1, std::tuple<int, int> pos2){
            if(
                (std::get<0>(pos1) == std::get<0>(pos2)) 
                &&
                std::get<1>(pos1) == std::get<1>(pos2)
                ) return true; // if the two positions are equal (ship's destroyed)
            return false; // if the two positions are not equal (ship's not destroyed)
        }

        // This function helps check whether all the ships have been destroyed
        // bool checkShips(std::vector<GameEntity*> entities){
        //     std::tuple<int, int> s = {-1,-1}; // this is the position of the ship if it is destroyed. Mine's posiiton will stay the same unless for some miracle, the random number generate also generate a {-1,-1} position for a mine or two
        //     // <Update>: Actually, it can't. If we looked back at the Utils::calculateDistance(pos1,pos2). The random numbers are positive integers! Right, off we go again.
        //     for(int i=0;i< entities.size(); i++){
        //         if (entities[i] -> getType() == 'S'){ // only checking for ship entities
        //             Ship* ship = dynamic_cast<Ship*>(entities[i]); // dynamic or downcast from GameEntity to Ship entity
        //             if (!compare(ship -> getPos(), s)) return false; // if ship is not destroyed
        //             // if the ship is destroyed then this iteration increments to another one
        //         }

        //     }
        //     // if this is reached then all the ship has been destroyed
        //     return true;
        // }
        bool allShipsDestroyed(){
            // all ships have been destroyed
            if(numShips == 0) return true;
            
            // Some ships left....
            for (auto entity: entities){
                if (entity -> getType() == 'S'){
                    Ship* ship = dynamic_cast<Ship*>(entity);
                    if(ship != nullptr){
                        if (compare(entity -> getPos(), {-1,-1})) numShips--;
                    }
                }
            }
            return false;
        }

        // This function stimulates the game
        void gameLoop(int maxIterations, double mineDistanceThreshold)
        { // start method
            this -> maxI = maxIterations;
            int i=0; // number of iteration
            bool shipsLeft = allShipsDestroyed();
            while((i < maxIterations) && (shipsLeft == true))  // game loop will stop when either 
                                                            // max iterations reached or all ships collapsed
            { // start game loop
                // Move all the ships to (1,0)
                for(auto entity : entities){
                    if(entity->getType() == 'S'){
                        // cast entity to Ship*
                        Ship* ship = dynamic_cast<Ship*>(entity);
                        // move the ship
                        ship->move(1, 0);   
                    }
                    // Assuming that I pushed the ship objects into entities before psuhing the mine objects, I can just break once I encountered a mine object
                    // However, for precaution, I will let it run on as this logic works for general the general case (whether ship or mine precedes each other).
                } // all ships have been moved to position (1,0)

                // Check if any ship object is within a mine's territory
                for(auto entity: entities){
                    // If the entity is successful, it should return true
                    // Ship* ship = dynamic_cast<Ship*>(entity);
                    // Looking for ship's object
                    if(entity -> getType() == 'S'){
                        Ship* ship = dynamic_cast<Ship*>(entity);
                        // Look for Mine object... 
                        Explosion explosion;
                        for(auto otherEntity : entities){
                            if(otherEntity->getType() == 'M'){
                                Mine* mine = dynamic_cast<Mine*>(otherEntity);
                                // check if the distance is within reach
                                if(Utils::calculateDistance(ship->getPos(), mine -> getPos()) <= mineDistanceThreshold){
                                    explosion = mine->explode();
                                    explosion.apply(*ship);
                                } // end of checking ships within mine threshold
                            }
                        } // end of checking for mine objects        
                    } // end of checking for ship objects
                } // end of checking for any ship within a mine's threshold
                i++;
            } // end of game loop
            
        }// end method
        
        
        //getter and setter
        void set_entities(){}
        std::vector<GameEntity*> get_entities(){ return entities;}

        ~Game(){
            // for(int i=0;i<entities.size();i++) delete entities[i];


        }

};




#endif