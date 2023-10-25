#include "Game.h"


int main(){
    Game game;
    int numCharacters = 10; 
    int numTraps = 20;
    int gridWidth = 30; 
    int gridHeight = 30;
    game.initGame( numCharacters,  numTraps,  gridWidth,  gridHeight);
    int maxIterations = 100;
    double trapActivationDistance = 5.6;
    game.gameLoop( maxIterations,  trapActivationDistance);

    return 0;
}