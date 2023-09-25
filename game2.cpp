#include <SFML/Graphics.hpp>
#include <SFML/Window/Keyboard.hpp>
#include <iostream>
// #include <SFML/Graphics/RenderWindow.hpp>
#include <string>
#include "player.h"
#include "enemy.h"

using namespace sf;
class OOPGame{
    private:
        sf::RenderWindow* win;
        Player* player;
        Enemy* enemy;
        int _army_size;
        int _mag_size;
        int _score;
        sf::Text info;
        sf::Font font;
    public:
        OOPGame(int size, std::string title, int mag_size, int army_size){
            win = new sf::RenderWindow(sf::VideoMode(size, size), title); 
            player = new Player(10,50,50, mag_size);
            enemy = new Enemy[army_size];
            this -> _army_size = army_size;
            this -> _mag_size = mag_size; 
            _score = 0;
            if(!font.loadFromFile("./game_over.ttf")){
                std::cout << "Font not found\n";
                exit(0);
            }
            info.setFont(font);
            info.setFillColor(sf::Color::Red);
            info.setCharacterSize(50);


        }
         void check_score(){
            for(int i=0;i<_army_size;i++){
                if(enemy[i].isAlive())
                {
                    if(enemy[i].isHit(player -> get_x(), player -> get_y(), player -> get_depth()))
                    {
                        _score --;
                        enemy[i].die();
                    }
                    if(player -> isHit(enemy[i].get_x(), enemy[i].get_y(), enemy[i].get_depth())){
                        _score++;
                        enemy[i].die();
                     	enemy[i].spawn(win -> getSize().x-10, win -> getSize().y);

                    }

                }
            }
            std::cout << _score << std::endl; 
        }

        void run(){
            while(win -> isOpen()){
                Event e;
                while(win -> pollEvent(e)){
                    if(e.type == Event::Closed) win -> close();
                    if(Keyboard::isKeyPressed(Keyboard::A)){
                        player -> move_left(6);
                    }
                    else if(Keyboard::isKeyPressed(Keyboard::D)){
                        player -> move_right(6);
                    }
                    else if(Keyboard::isKeyPressed(Keyboard::W)){
                            player -> move_up(6);
                    }
                    else if(Keyboard::isKeyPressed(Keyboard::S)){
                            player -> move_down(6);
                    }
                    if(Keyboard::isKeyPressed(Keyboard::Space)){
                            player -> fire();
                    }
                    if(Keyboard::isKeyPressed(Keyboard::R)){
                        player -> reload();
                    }
                    if(Keyboard::isKeyPressed(sf::Keyboard::E)){
                        for(int i=0;i<_army_size;i++){
                            	enemy[i].spawn(win -> getSize().x-10, win -> getSize().y);
                        }
                    }

                }
            win -> clear();
            check_score();
            if(_score < 0){
                return ;
            }
            player -> draw(win);
            for(int i=0;i<_army_size;i++){
                enemy[i].draw(win);
            }

            std::string msg;
            msg = "Score: " + std::to_string(_score) + " .";
            info.setString(msg);
            win -> draw(info);

            win -> display();
            }
        }
        
        ~OOPGame(){
            delete player;
            delete win;
            delete[] enemy;
        }
};


int main(){
    OOPGame g(500, "OOPGame", 100, 50);  
    g.run();


    return 0;
}
