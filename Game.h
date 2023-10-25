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
            this -> gridHeight = gridHeight;
            this -> gridWidth = gridWidth;
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
                    return false;
            }
            return true;
        }

        void gameLoop(int maxIterations, double trapActivationDistance){
            int i = 0;
            while(i < maxIterations){
                for(auto c:grid){
                    if(c -> getType() == 'C'){
                        Character* character = dynamic_cast<Character*>(c);
                        character -> move(1,0); 
                    }
                }

                for(auto cell: grid){
                    if(cell -> getType() == 'C'){
                        Character* character = static_cast<Character*>(cell);
                        if(checkChar(character -> getPos())){
                            std::cout << "Character has won the game!" <<std::endl;
                            return;
                        }
                        for(auto entity: grid){
                            if(entity -> getType() == 'T')
                            {
                                Trap* trap = static_cast<Trap*>(entity);
                                // if(trap == nullptr) std::cout << "trap is null\n";
                                if(Utils::calculateDistance(character -> getPos(), entity -> getPos()) < trapActivationDistance){
                                        trap -> apply(*character);
                                }
                            }
                        }
                    }
                }
                
                // std::cout << "Maximum number of iterations reached. Game over.";
                i++;
            }
            std::cout << "Maximum number of iterations reached. Game over." << std::endl;
        }

};  


#endif


/*Q2-1 (15/15)
All files found, +1 marks.
Successfully compiled program.out with files main-2.cpp. +2 marks
Successfully compiled program.out with files test-2-1.cpp. +2 marks
Q2-1 Test00 Passed. +10 marks
Q3-1 (5/20)
All files found, +1 marks.
Successfully compiled program.out with files main-3.cpp. +2 marks
Successfully compiled program.out with files test-3-1.cpp. +2 marks

Q3-1 Test00 failed!

< EXPECTED-OUTPUT
---
> YOUR-OUTPUT

===Begin diff output===
6,8c6
< Character has won the game!
< 
< 
---
> Maximum number of iterations reached. Game over.
====End diff output====*/