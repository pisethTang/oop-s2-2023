#include <iostream>
#include <ostream>
#include "textBased.h"


// std::ostream &operator<<(std::ostream &out, const std::vector<int> &vec){

// }



struct Vector2{
    float x,y;

    Vector2(float x, float y): x(x), y(y){}

    Vector2 Add(const Vector2& other) const{
        return Vector2(x + other.x , y + other.y);
    }

    Vector2 operator+(const Vector2& other){
        return Add(other);
    }


    Vector2 Multiply(const Vector2& other) const{
        return Vector2(x*other.x , y * other.y);
    }
    Vector2 operator*(const Vector2& other){
        return Multiply(other);
    }

    
};

// Overloading operator<< for std::vector<int>
std::ostream& operator<<(std::ostream& os, const Vector2& vec) {
    // Your custom output logic for the vector
    // os << "[ ";
    // for (const auto& element : vec) {
    //     os << element << ' ';
    // }
    // os << "]";

    os << vec.x << ", " << vec.y;
    return os;
}

int main(){
    textBased game("Farming Simulator");

    game.startGame();
    // std::vector<int> X(1);
    // X.push_back(18);
    // std::cout << X << std::endl;
    // std::cout << 1;

    // Vector2 position(4.0f, 4.0f);
    // Vector2 speed(0.5f,0.5f);
    // Vector2 powerup(1.1f, 1.1f);

    // // Vector2 result = position.Add(speed.Multiply(powerup));
    // Vector2 result2 = position + speed * powerup;

    // std::cout << result2 << std::endl;







    return 0;
}