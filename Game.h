#ifndef GAME_H
#define GAME_H

#include <vector>
#include "Explosion.h"
#include "GameEntity.h"
#include "Utils.h"
#include "Ship.h"
#include "Mine.h"

class Game{
    private:
        std::vector<GameEntity*> entities; // store entities in our game;
    public:
        std::vector<GameEntity*> get_entities(){
            return entities;
        }
        void set_entities(){
            // entities = new GameEntity*[10];
        }

        std::vector<GameEntity*> initgame(int numShips, int numMines, int gridWidth, int gridHeight){
            // create the specified number of Mine and Ship objects with random positions
            for(int i=0;i<numShips; i++) 
            {
                    std::tuple<int , int> pos = Utils::generateRandomPos(gridWidth,gridHeight);
                    entities.push_back(new Ship(std::get<0>(pos), std::get<1>(pos)));
            }

            for(int i=0;i<numMines;i++) 
            {
                std::tuple<int , int> pos = Utils::generateRandomPos(gridWidth,gridHeight);
                entities.push_back(new Mine(std::get<0>(pos), std::get<1>(pos)));
            }
            // I think we can combine the loops into one by utilizing the type of each game entity. Let's just pass to GradeSCope for now

            // returns entities vector
            return entities;
        }

        void gameLoop(int maxIterations, double mineDistanceThreshold)
        {
            int i=0; // number of iteration
            
            while(i < maxIterations) 
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
                        for(auto otherEntity : entities){
                            if(otherEntity->getType() == 'M'){
                                Mine* mine = dynamic_cast<Mine*>(otherEntity);
                                // check if the distance is within reach
                                if(Utils::calculateDistance(ship->getPos(), mine -> getPos()) <= mineDistanceThreshold){
                                    mine->explode();
                                    // explosion.apply(ship);
                                } // end of checking ships within mine threshold
                            }
                        } // end of checking for mine objects        
                    } // end of checking for ship objects
                } // end of checking for any ship within a mine's threshold
            } // end of game loop
                i++;
            
        }// end method
        
};



#endif