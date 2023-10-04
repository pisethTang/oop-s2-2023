#include <iostream>

// template<class T> // T: template argument(can take in any data type)
// class Point{
//     private:
//         T _x = 0;
//         int _y = 0;
//     public:
//         Point(int x, int y): _x(x), _y(y){}
//         void setPoint(int x, int y){_x =x;_y=y;}
//         int get_x(){return _x;}
//         int get_y(){return _y;}

// };

// template<class T, class K> // whatever the data type is passed in, implicit conversion(truncation, isomorphism) is auomatically be performed.
// class Point{
//     private:
//         T _x;
//         K _y;
//     public:
//         Point(T x, K y): _x(x), _y(y){}
//         void setPoint(T x, K y){_x=x;_y=y;}
//         T get_x(){return _x;} 
//         K get_y(){return _y;}
// };

template<class T, class K>
class Point{
    private:
        T _x;
        K _y;
    public:
        Point(T x, K y): _x(x), _y(y){}
        void setPoint(T x, K y){_x = x; _y = y;}
};

int main(){
    Point<float, char> p1(400,'a');
    std::cout << p1.get_x() << "," << p1.get_y() << "\n";
    return 0;
}