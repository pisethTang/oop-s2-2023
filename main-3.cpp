#include <iostream>
#include "Game.h"



int main(){
    Game game;
    int numShips = 10;
    int numMines = 12;
    int gridWidth = 10;
    int gridHeight = 10;
    game.initGame(numShips,numMines, gridWidth, gridHeight);
    std::vector<GameEntity*> entities = game.get_entities();
    std::cout << "Initial Entities: " << std::endl;
    for (auto entity: entities){            
        std::cout << "Type: " << entity->getType() << ", Position: (" << std::get<0>(entity->getPos()) << ", "
                  << std::get<1>(entity->getPos()) << ")\n";    
    }

    std::cout << "Final Entities: " << std::endl;
    int maxIterations = 100;
    double mineDistanceThreshold = 3;
    game.gameLoop(maxIterations, mineDistanceThreshold);


    return 0;
}