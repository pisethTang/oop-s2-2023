#include <iostream>
#include "Game.h"
#include <cassert>




int main(){
    // Test Game class
    Game myGame;

    // Test initGame() function
    myGame.initGame(3, 2, 10, 10);

    // Check that the number of entities created matches the expected total
    assert(myGame.get_entities().size() == 5);

    // Test gameLoop() function
    myGame.gameLoop(5, 3.0);
    bool test3 = false;
    // all ships haven't been destroyed and iterations have exhausted
    if(myGame.getMax() == 0) 
    {   std::cout << "Iteration reached!\n";
            std::cout << "Check ships remaining....\n";
            assert(myGame.getnumShip() == 0);
            return 0;
    }
    assert(myGame.getnumShip() > 0);
    std::cout << "All goes well!" <<std::endl;
   
    // Check that all Ship objects are destroyed or number of iterations reached


    return 0;
}
