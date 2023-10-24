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
    public:
        // This function propgates the entities vector with ships and mines (data collection)
        std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight){
            // Generate the specified number of ships and mines of random positions
            // and pushing them into entities vector
            this -> numShips = numShips;
            this -> numMines = numMines;
            for(int i=0;i<numShips;i++) 
            {   
                    std::tuple<int, int> random_pos = Utils::generateRandomPosition(gridWidth, gridHeight);
                    int r_x = std::get<0> (random_pos);
                    int r_y = std::get<1> (random_pos);
                    entities.push_back(new Ship(r_x, r_y));
            }

            for(int i=0;i<numMines;i++) 
            {   
                    std::tuple<int, int> random_pos = Utils::generateRandomPosition(gridWidth, gridHeight);
                    int r_x = std::get<0> (random_pos);
                    int r_y = std::get<1> (random_pos);
                    entities.push_back(new Mine(r_x, r_y));
            }
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
        bool checkShips(std::vector<GameEntity*> entities){
            std::tuple<int, int> s = {-1,-1}; // this is the position of the ship if it is destroyed. Mine's posiiton will stay the same unless for some miracle, the random number generate also generate a {-1,-1} position for a mine or two
            // <Update>: Actually, it can't. If we looked back at the Utils::calculateDistance(pos1,pos2). The random numbers are positive integers! Right, off we go again.
            for(int i=0;i< entities.size(); i++){
                if (entities[i] -> getType() == 'S'){ // only checking for ship entities
                    Ship* ship = dynamic_cast<Ship*>(entities[i]); // dynamic or downcast from GameEntity to Ship entity
                    if (!compare(ship -> getPos(), s)) return false; // if ship is not destroyed
                    // if the ship is destroyed then this iteration increments to another one
                }

            }
            // if this is reached then all the ship has been destroyed
            return true;
        }

        // This function stimulates the game
        void gameLoop(int maxIterations, double mineDistanceThreshold)
        {
            int i = 0;
            bool allShipsDestoryed = checkShips(entities);
            while((i < maxIterations) && (allShipsDestoryed == false)) // while maxIterations hasn't been reached and not all Ships are destroyed, keep the game running!
            { // Start while loop
                // Call move(1,0) for all Ship objects in entities
                int j=0;
                bool allShipsDestroyed;
                while(j< numShips + numMines){
                    // if the entity is a ship
                    if (entities[j] -> getType() == 'S'){
                        Ship* ship = dynamic_cast<Ship*>(entities[i]); // cast the game entity into a ship entity
                        ship -> move(1,0); // move the ship 1 unit distance across the x-axis
                   }
                   j++; // increment j whether a ship has been detected
                }

                // now all the ship has been moved to position (1,0)
                // let's check if any ships are within a certain distance
                for(int k=0; i< numShips + numMines;i++){
                    if (entities[k] -> getType() == 'S'){
                        Ship* ship = dynamic_cast<Ship*>(entities[k]);
                        // if (!(ship == nullptr)) std::cout << "ship is not null\n";
                        for(int l = 0; l<numShips + numMines; l++){ // check for everything again for precaution although it is not needed (explain more later)
                            if(entities[l] -> getType() == 'M')
                            { // if it is a mine
                                Mine* mine = dynamic_cast<Mine*>(entities[l]);
                                // if (!(mine == nullptr)) std::cout << "mine is not null\n";
                                // if ship is within mine's thereshold than boom!
                                if (Utils::calculateDistance(ship -> getPos(), mine -> getPos()) < mineDistanceThreshold)
                                {
                                    Explosion explosion = mine -> explode();
                                    explosion.apply(*ship); // explode the ship (changing its position to (-1,-1) and type to 'X')
                                } // end of checking if ship is within mine's threshold
                            } // end of checking if entity is a mine
                    } // end inner for loop 
                } // end of checking if entity is a ship
                }  // end of checking if ship is withing a certain distance


                i++;
            } // end while loop
            // loop/function end either 
            // maxIterations is reached
            // all ships are destroyed

        } // function terminated 
        
        
        //getter and setter
        void set_entities(){}
        std::vector<GameEntity*> get_entities(){ return entities;}

};




#endif