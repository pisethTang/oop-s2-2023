#include <iostream>
using namespace std;

class Point{
    private:
        int* _x;
        int* _y;
    public:
        // Point(): _x(0), _y(0){}
        Point(){
            _x = new int(0);
            _y = new int(0);
        }
        //const just means that the copy constructor cannot modify anything of pnt
        Point(const Point& pnt){ //creating a copy constructor
            _x = new int(*pnt._x);
            _y = new int(*pnt._y);

        }

        void operator=(const Point& pnt){
            // we don't need to allocate memory in the heap again since the constructor already did that
            *_x = *pnt._x;
            *_y = *pnt._y;
            // return *this;
        }


        virtual void print(){
            cout << "x: " << *_x << ", y: " << *_y << endl;
        }

        virtual void setPoint(int x, int y){
            *_x = x;
            *_y = y;
        }
        virtual ~Point(){
            delete _x;
            delete _y;
            std::cout << "_x and _y were destroyed!\n";
        }

};
class Point3d: public Point{
    private:
        int* _z;
    public:
        Point3d(int x, int y, int z){
            Point::setPoint(x, y);
            _z = new int(0); 
        }

        Point3d():Point3d(0,0,0){}

        //copy constructor        
        Point3d(const Point3d& pnt): Point(pnt){
            _z = new int(*pnt._z);
        }
        void operator=(const Point3d& pnt){
            Point::operator=(pnt);
            *_z = *pnt._z;
        }
        void print(){
            Point::print();
            cout << "z: " << *_z << endl;
        }
        void setPoint(int x, int y, int z){
            Point::setPoint(x, y);
            *_z = z;
        }

        ~Point3d(){
            delete _z;
            std::cout << "_z was destroyed!\n";
        }
        
};


void foo_ref(Point& pnt){
    pnt.print();
}

Point foo_value(){
    Point pnt;
    pnt.setPoint(100, 100);
    return pnt;
}



int main(){
    // Point p1;
    // p1.setPoint(10, 20);
    // // p1.print();
    // // p1 = foo_value(); // the assignment operator, which is actually a function, dislays similar behaviour to the copy constructor
    // p1.print();



    // // Point p2 = p1;
    // Point p2;
    // p2 = p1; // this is the assignment operator
    // p2.setPoint(100, 200);
    // std::cout << "p2 -> ";
    // p2.print();
    // // foo(p2);
    // std::cout << "p1 -> ";
    // p1.print();
    std::cout << "\nTest 3d points\n";
    Point* p3d = new Point3d;
    p3d -> setPoint(10, 20);
    p3d -> print();


    delete p3d;

    return 0;
}