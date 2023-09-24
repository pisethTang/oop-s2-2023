#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Keyboard.hpp>
using namespace sf;

void move_left(CircleShape& a){
    Vector2f pos = a.getPosition();
    pos.x = pos.x - 1;
    a.setPosition(pos);
}

void move_right(CircleShape& a){
    Vector2f pos = a.getPosition();
    pos.x = pos.x + 1;
    a.setPosition(pos);
}

int main(){
    RenderWindow window(VideoMode(200,200), "I love OOP");
    CircleShape shape(10.f);
    shape.setFillColor(Color::Green);

    shape.setOrigin(Vector2f(5,5));

    // Event event;
    while(window.isOpen()){
        Event event;
        while(window.pollEvent(event)){
            if(event.type == Event::Closed) window.close();
            // window.draw(shape);

            if(Keyboard::isKeyPressed(sf::Keyboard::Left))
            {
                move_left(shape);
            }
            else if (Keyboard::isKeyPressed(sf::Keyboard::Right)){
                move_right(shape);
            } 
        }

        
        window.clear();
        window.draw(shape);
        window.display();
    }    

}
