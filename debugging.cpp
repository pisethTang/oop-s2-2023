#include<iostream>
#define LOG(x) std::cout << x << std::endl
using namespace std;

// void Move(int x, int y, int speed)
class Player
{ // class are types so it has got to have a unique name/identifier
public:
    int x,y;
    int speed;


    void Move(int xa, int ya){ // Move() i s now the class Player's functionality
    x += xa * speed;
    y += ya * speed;
}

};


class Entity{
public: 
    float X, Y;
    Entity()
    {
        X = 0.0f;
        Y = 0.0f;
    }
    Entity(float x, float y){
        X = x;
        Y = y;
    }
    // void Init(){
        // X = 0.0f;
        // Y = 0.0f;
    // }
    void Print(){
        std::cout << X << ", " << Y << std::endl;
    }
};


int main()
{
    Player p1; 
    p1.x = 5;
    // Move(p1, 1,-1);
    p1.Move(1,-2);

    Entity e;
    // e.Init();
    std::cout << e.X << std::endl;
    e.Print();


    Entity e1(5,10);
    e1.Print();
    std::cin.get();


 



    return 0;
}