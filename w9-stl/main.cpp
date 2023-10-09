#include <iostream>
#include "point.h"
#include "pair.h"


typedef Point<int> Point_i;
typedef Point<float> Point_f;
typedef Point<double> Point_d;
typedef Point<int>* Point_ptr_i;
typedef Pair<int, int> Pair_i1;


typedef int* int_ptr;


int main(){
    // Point<int> p1(2,5);
    // Point<float> p2(3.5,8.5);
    // Point<double> p3(0.002,0.0032);
    Point_i p1(2,5);
    Point_f p2(3.5,8.5);
    Point_d p3(0.002,0.0032);
    // p1.print();
    p2.print();
    p3.print();

    int_ptr i_ptr = new int;
    std::cout << *i_ptr << "\n";
    // Point<int>* ptr1 = &p1;
    // Point_i* ptr1 = new Point_i(10,100);
    Point_ptr_i ptr1 = new Point_i(12,38);

    ptr1 -> print();

    // Pair<int, int> pa1(12,3);
    Pair_i1 pa1(12,3);
    Pair<int , float> pa2(41,3.12);
    Pair<double, float> pa3(12.1221,32.21);

    Pair<Point_i, Point_f> line(p1,p2);
    

    return 0;
}