#include<iostream>
#include<string>

struct Vector2{
    float x,y;
};

int main(){

    int a = 2;
    int b = a;
    
    b = 3;

    Vector2 a = {2,3};
    Vector2 b = a;
    b.x = 5;



    std::cin.get();
}