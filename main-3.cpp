#include <iostream>
#include "Game.h"


int main(){
    Game game;
    int numShips = 10;
    int numMines = 8;
    int gridHeight = 15;
    int gridWidth = 16;
    game.initGame(numShips,numMines, gridWidth, gridHeight);

    int maxIterations = 20;
    double mineDistanceThreshold = 5.0;
    game.gameLoop(maxIterations, mineDistanceThreshold);


    return 0;
}