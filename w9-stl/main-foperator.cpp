#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>


class Point{
    public: int _x, _y;

    float operator()(Point p2){
        return sqrt(pow(_x-p2._x,2) + pow(_y-p2._y,2));
    }

};




int main(){
    Point p1 = {10,50};
    Point p2 = {20,21};
    float distance = p1(p2); // we are using an object as a function, and we are passing an object to it
    std::cout << distance << std::endl;



    return 0;
}