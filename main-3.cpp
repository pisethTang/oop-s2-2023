#include <iostream>
#include "Game.h"



int main(){
    Game game;
    int numShips = 10;
    int numMines = 12;
    int gridWidth = 10;
    int gridHeight = 10;
    game.initGame(numShips,numMines, gridWidth, gridHeight);

    int maxIterations = 100;
    double mineDistanceThreshold = 3;
    game.gameLoop(maxIterations, mineDistanceThreshold);


    return 0;
}