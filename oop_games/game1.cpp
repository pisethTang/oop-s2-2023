#include <SFML/Graphics.hpp>


void move_left(sf::CircleShape& a){
    sf::Vector2f pose = a.getPosition();
    pose.x = pose.x - 1;
    a.setPosition(sf::Vector2f(pose));

}

void move_right(sf::CircleShape& a){
    sf::Vector2f pose = a.getPosition();
    pose.x = pose.x + 1;
    a.setPosition(sf::Vector2f(pose));
}

void move_up(sf::CircleShape& a){
    sf::Vector2f pose = a.getPosition();
    pose.y = pose.y - 1;
    a.setPosition(sf::Vector2f(pose));

}
void move_down(sf::CircleShape& a){
    sf::Vector2f pose = a.getPosition();
    pose.y = pose.y + 1;
    a.setPosition(sf::Vector2f(pose));

}


int main(){
    sf::RenderWindow window(sf::VideoMode(200,200), "SFML works!");
    sf::CircleShape shape(10.f);

    shape.setFillColor(sf::Color::Green);
    // sf::RenderWindow::setVerticalSyncEnabled();
    shape.setOrigin(sf::Vector2f(5,5));
    shape.setPosition(sf::Vector2f(100,100)); // position of the circle 

    while(window.isOpen()){
        sf::Event event;
        while(window.pollEvent(event)){
        if(event.type == sf::Event::Closed) window.close();
        
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
           move_left(shape);
        } else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
            move_right(shape);
        } else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
            move_up(shape);
        } else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
            move_down(shape);
        }

        }


        window.clear();
        window.draw(shape);
        window.display();
    }


    return 0;
}