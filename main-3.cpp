#include "Game.h"


int main(){
    Game game;
    int numCharacters = 100; 
    int numTraps = 100;
    int gridWidth = 30; 
    int gridHeight = 30;
    game.initGame( numCharacters,  numTraps,  gridWidth,  gridHeight);
    int maxIterations = 1000;
    double trapActivationDistance = 1.9;
    game.gameLoop(maxIterations, trapActivationDistance);

    return 0;
}