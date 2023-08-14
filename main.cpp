#include<SFML/Graphics.hpp>

using namespace std;

//  why pass by referece
void move_left(sf::CircleShape& a){
    sf::Vector2f pose = a.getPosition();
    pose.x = pose.x - 1;
    a.setPosition(pose);
}

void move_right(sf::CircleShape& a){
    sf::Vector2f pose = a.getPosition();
    pose.x = pose.x + 1;
    a.setPosition(pose);
}



int main(){
    sf::RenderWindow window(sf::VideoMode(200,200), "SFML works!");
    sf::CircleShape shape(10.f);    
    shape.setFillColor(sf::Color::Green);
    shape.setOrigin(sf::Vector2f(5,5));
    shape.setPosition(sf::Vector2f(100, 100)); // position of the circle inside the window



    while(window.isOpen()){
        sf::Event event;
        while(window.pollEvent(event)){
            if(event.type == sf::Event::Closed) {window.close();
            }
            
            
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            {
            // left key is pressed: move our character
            // chaarcter.move(1.f, 0.f);
            move_left(shape);
            
            }else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
                move_right(shape);

        }

       

        window.clear();
        window.draw(shape);
        window.display();
    }


    return 0;
}