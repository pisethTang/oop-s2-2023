#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <vector>
#include "Cell.h"
#include "Utils.h"
#include "Character.h"
#include "Trap.h"

class Game{
    private:
        std::vector<Cell*> grid; // same as entities
        int gridWidth;
        int gridHeight;
    public:
        Game(){}
        std::vector<Cell*> & getGrid(){return grid;}
        void initGame(int numCharacters, int numTraps, int gridWidth, int gridHeight){
            for(int i=0;i<numCharacters; i++){
                std::tuple<int , int> randomPos = Utils::generateRandomPos( gridWidth, gridHeight);
                int r1 = std::get<0>(randomPos);
                int r2 =std::get<1>(randomPos);
                grid.push_back(new Character(r1, r2));
            }
            for(int i=0;i<numTraps; i++){
                std::tuple<int , int> randomPos = Utils::generateRandomPos( gridWidth, gridHeight);
                int r1 = std::get<0>(randomPos);
                int r2 =std::get<1>(randomPos);
                grid.push_back(new Trap(r1, r2));
            }

            // return grid;
        }


        void gameLoop(int maxIterations, double trapActivationDistance){
            int i = 0;
            while(i < maxIterations){
                if(grid[i] -> getType() == 'C'){
                    Character* character = dynamic_cast<Character*>(grid[i]);
                    character -> move(1,0); // move the chracter 1 distance in the x-axis
                }

                for(auto cell: grid){
                    if(cell -> getType() == 'C'){
                        Character* character = dynamic_cast<Character*>(cell);
                        std::tuple<int, int> ch_pos = character -> getPos();
                        bool b1 = std::get<0>(ch_pos) > 0 && std::get<0>(ch_pos) < gridWidth;
                        bool b2 = std::get<1>(ch_pos) > 0 && std::get<1>(ch_pos) < gridHeight;
                        if(b1 && b2 == true) {
                            std::cout << "Character has won the game!" << std::endl;
                            return;
                        }
                        else{
                        for(auto cell: grid){
                            if(cell -> getType() == 'T'){
                                Trap* trap = dynamic_cast<Trap*>(cell);
                                if(Utils::calculateDistance(character -> getPos(), trap -> getPos()) <= trapActivationDistance){
                                    trap -> apply(*character);
                                }

                            }
                        }
                        }
                    }
                }
                i++;
            }
            std::cout << "Maximum number of iterations reached. Game over." <<std::endl;

        }

};  


#endif