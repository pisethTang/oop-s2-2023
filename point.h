#ifndef __POINT_H__
#define __POINT_H__
#include <iostream>

template <class T>
class Point{
    private:
        T _x;
        T _y;
    public:
        Point(T x, T y):_x(x), _y(y){}
        Point():Point(0,0){}
        void print();
        // void print(){
        //     std::cout << "(" << _x  << "," << _y << ")\n";
        // }
};

// template<class T>
// Point<T>::Point(T x, T y): _x(x), _y(y){}

template<class T>
void Point<T>::print(){
    std::cout << "(" << _x << "," << _y << ")\n";
}


#endif