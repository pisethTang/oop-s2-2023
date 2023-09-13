#include <SFML/Graphics.hpp>
using namespace sf;
class OOPGame{
    private:
        sf::RenderWindow* win;
    public:
        OOPGame(int size, std::string title){
            win = new sf::RenderWindow(sf::VideoMode(size, size), title);
        }
        void run(){
            while(win -> isOpen()){
                Event e;
                while(win -> pollEvent(e)){
                    if(e.type == Event::Closed) win -> close();
                }
                win -> clear();
                win -> display();
            }
        }

        ~OOPGame(){}
};


int main(){
    OOPGame g1(500, "OOP Game");
    g1.run();


    return 0;
}