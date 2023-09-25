#ifndef BULLET_H
#define BULLET_H
#include <SFML/Graphics.hpp>
#include "gameEntity.h"

#include <cmath>
class Bullet: public GameEntity{
    private:
        // sf::RectangleShape* body;
        bool fired;
        // int _depth;
    public:
        Bullet(){
            _depth = 5;
            body = new sf::RectangleShape(sf::Vector2f(10,10));
            body -> setFillColor(sf::Color::Red);
            body -> setPosition(-1,-1);
            body -> setOrigin(_depth, _depth/2);
            fired = false;
        }
        void draw(sf::RenderWindow* win){
            win -> draw(*body);
        }

     

        void move(){
            body -> move(0.5,0);
        }

        bool isFired(){
            return fired;
        }

        void use(sf::Vector2f position){
            body -> setPosition(position);
            fired = true;
        } 

        void reload(){
            fired = false;
        }      
        ~Bullet(){
            delete this -> body;
            
        }
};


#endif