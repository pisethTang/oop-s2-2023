#include "iostream"
#include "Game.h"


int main(){
    Game game;
    int numShips = 10; 
    int numMines  =10;
    int gridWidth = 11;
    int gridHeight = 12;

    game.initGame( numShips,  numMines,  gridWidth,  gridHeight);
    int maxIterations = 100;
    double mineDistanceThreshold = 10.4;
    game.gameLoop( maxIterations,  mineDistanceThreshold);
    


}