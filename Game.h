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
        std::vector<Cell*> & getGrid(){return grid;}
        std::vector<Cell*> initGame(int numCharacters, int numTraps, int gridWidth, int gridHeight){
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

            return grid;
        }
        bool checkChar(std::tuple<int, int> pos){
            bool b1 = std::get<0>(pos) < 0 && std::get<0>(pos) > gridWidth;
            bool b2 = std::get<1>(pos) < 0 && std::get<1>(pos) > gridHeight;
            if(b1 && b2 == true) { // check if any character has stepped outside of the grid
                    // std::cout << "Character has won the game!" << std::endl;
                    return true;
            }
            return false;
        }

        void gameLoop(int maxIterations, double trapActivationDistance){
            // int i = 0;
            for(int i=0;i<maxIterations;i++){
                for(auto cell: grid){
                if(cell -> getType() == 'C'){
                    Character* character = dynamic_cast<Character*>(cell);
                    character -> move(1,0); // move the chracter 1 distance in the x-axis
                    // if(character == nullptr) std::cout << "character is nullptr\n";
                }
                }
                std::cout << "first loop ok!\n";

                for(auto cell: grid){
                    if(cell -> getType() == 'C'){
                        Character* character = dynamic_cast<Character*>(cell);
                        // if(character == nullptr) std::cout << "character is null" << std::endl;
                        // else std::cout << "character is not null\n";
                        std::tuple<int, int> ch_pos = character -> getPos();
                        // bool b1 = std::get<0>(ch_pos) < 0 && std::get<0>(ch_pos) > gridWidth;
                        // bool b2 = std::get<1>(ch_pos) < 0 && std::get<1>(ch_pos) > gridHeight;
                        // if(b1 && b2 == true) { // check if any character has stepped outside of the grid
                            // std::cout << "Character has won the game!" << std::endl;
                            // return;
                        // }
                        if(checkChar(ch_pos) == true){
                            std::cout << "Character has won the game!" << std::endl;
                            return;
                        }
                        else{
                         // if not then 
                        for(auto cell: grid){
                            if(cell -> getType() == 'T'){
                                Trap* trap = dynamic_cast<Trap*>(cell);
                                if(trap == nullptr && character == nullptr) std::cout << "character and trap is null";
                                //std::cout << "trap is null" << std::endl;
                                // else std::cout << "trap is not null\n";
                                if(Utils::calculateDistance(character -> getPos(), trap -> getPos()) < trapActivationDistance){
                                    trap -> apply(*character);
                                }
                            }
                        }

                        }   
                    }
                }

                // i++;
            }
            std::cout << "Maximum number of iterations reached. Game over." <<std::endl;

        }

};  


#endif