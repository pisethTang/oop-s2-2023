#ifndef GAME_ENTITY_H
#define GAME_ENTITY_H

#include <cmath>
#include <SFML/Graphics.hpp>

class GameEntity{
    protected:
        sf::Shape* body;
        int _depth;
    public:
        void draw(sf::RenderWindow* win){
            win -> draw(*body);   
        }
        int get_x(){ return body ->getPosition().x;}
        int get_y(){return body -> getPosition().y;}
        int get_depth(){return _depth;}

        void set_position(sf::Vector2f position){
            body -> setPosition(position);
        }
        bool isHit(int target_x, int target_y, int target_depth){
            bool hit = false;
            int x = get_x();
            int y = get_y();
    	    float d = sqrt(pow((x-target_x),2) + pow((y-target_y), 2));            
            if(d < (_depth + target_depth)) hit = true;
            return hit;
      }   


};



#endif // GAME_ENTITY_H
