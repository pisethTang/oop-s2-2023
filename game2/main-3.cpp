#include <iostream>

#include "TreasureHuntGame.h"


int main(){
    TreasureHuntGame game;
    int numTreasures = 50;
    int numObstacles = 10000; 
    int numPlayers = 10000; 
    int mapWidth = 100; 
    int mapHeight = 100;
    game.generateMap( numTreasures,  numObstacles,  numPlayers,  mapWidth, mapHeight);

    int maxMoves = 10000000;
    while(true){
        game.playGame(maxMoves);
        
    }
    return 0;
}