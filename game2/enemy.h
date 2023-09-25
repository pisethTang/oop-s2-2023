#ifndef ENEMY_H
#define ENEMY_H
#include "gameEntity.h"
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Vector2.hpp>
#include <cstdlib>
#include <iostream>
#include <math.h>
#include <random>
#include <ctime>
#include <cmath>

class Enemy: public GameEntity{
    private:
        bool alive;
    public:
        Enemy(){
            _depth = 10;
            body = new sf::RectangleShape(sf::Vector2f(_depth,_depth));
            body -> setFillColor(sf::Color::Cyan);
            body -> setPosition(-1,-1);
            alive = false;
            body -> setOrigin(_depth/2,_depth/2);
            srand(time(0));

        }


      bool isHit(int target_x, int target_y, int target_depth){
            bool hit = false;
            int x = get_x();
            int y = get_y();
    	    float d = sqrt(pow((x-target_x),2) + pow((y-target_y), 2));            
            if(d < (_depth + target_depth)) hit = true;
            return hit;
      }        
      bool isAlive(){return alive;}
        void die(){alive = false;}

        void spawn(int x, int y){
            int rand_y = rand() % y + 1;

            body -> setPosition(x,rand_y);
            this -> alive = true;
        }
        void draw(sf::RenderWindow* win){
            if(this -> alive){
                body -> move(-0.1, 0);
                win -> draw(*body);
                if(body -> getPosition().x < 0){
                    this -> spawn(win -> getSize().x -10, win->getSize().y);
                }
            }

        }



};


#endif