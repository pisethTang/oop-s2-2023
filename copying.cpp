#include<iostream>
#include<vector>
#include<string>


struct Vector2{
    float x, y;


};


int main(){
    // int a = 2;
    // int b = 3;
    // b = 10;
    Vector2 a = {2,3};
    Vector2 b = a;

    std::cout << b.x << std::endl;






    std::cin.get();
}