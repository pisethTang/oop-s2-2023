#ifndef PLAYER_H
#define PLAYER_H
#include <SFML/Graphics.hpp>
#include "bullet.h"
#include "gameEntity.h"

class Player: public GameEntity{
    private:
        int mag_size;
        Bullet* mag;
    public:
        Player(int r, int x, int y, int a_mag_size){
            body = new sf::CircleShape(r);
            body -> setPosition(x,y);
            body -> setFillColor(sf::Color::Green);
            _depth = r;
            body -> setOrigin(r/2, r/2);
            mag_size = a_mag_size;
            // create a fixed number of bullets
            mag = new Bullet[mag_size];
        }   

        void draw(sf::RenderWindow* win){
            win -> draw(*body);
            for(int i=0;i<mag_size;i++){
                if(mag[i].isFired()){
                    mag[i].move();
                    mag[i].draw(win);
                }
            }
        }

        void move_right(int speed){
            body -> move(speed, 0);
        }
          void move_left(int speed){
            body -> move(-speed, 0);
        }  void move_down(int speed){
            body -> move(0,speed);
        }  void move_up(int speed){
            body -> move(0, -speed);
        }

        void fire(){
            for(int i=0;i<mag_size;i++){
                if(!mag[i].isFired()) 
                {
                    mag[i].use(body -> getPosition());
                    break;
                }
            }
        }  
        bool isHit(int t_x, int t_y, int t_depth){
            bool hit = false;
            for(int i=0;i<mag_size;i++){
                if(mag[i].isFired()){
                    if(mag[i].isHit(t_x, t_y, t_depth))
                    { 
                        hit = true;
                        return hit;
                    }
                }
            }
            return hit;
        }

        void reload(){
            for(int i=0;i<mag_size;i++){
                if(mag[i].isFired()){
                    mag[i].reload();
                }
            }
        }

        ~Player(){
            delete this -> body;
            delete[] this -> mag;
        }
};


#endif