#include <SFML/Graphics.hpp>

class Bullet{
    private:
        sf::RectangleShape* body;
        bool fired;
    public:
        Bullet(){
            body = new sf::RectangleShape(sf::Vector2f(10,10));
            body -> setFillColor(sf::Color::Red);
            body -> setPosition(-1,-1);
        }
        void draw(sf::RenderWindow* win){
            win -> draw(*body);


        }

        void set_position(sf::Vector2f position){
            body -> setPosition(position);
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