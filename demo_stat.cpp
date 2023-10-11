#include <iostream>

class Entity{
    // private: int x,y;
    public:
        static int x,y;
        static void Print(){
            std::cout << x << ", " << y << "\n";
        }

};


void Print(Entity& e){
    std::cout << e.x << ", " << e.y << "\n";
}

int Entity::x = 10;
int Entity::y = 90;

int main(){
    // Entity e;
    // e.x = 1; e.y = 9;

    Entity::Print();
    // e.Print();

    return 0;
}