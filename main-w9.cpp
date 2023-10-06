#include <iostream>
#include <vector>
using namespace std;

template <class T>
struct Point{
    T _x = 1;
    T _y = 20;
};
typedef Point<int> Point_i;

int main(){
    // vector<Point<int>> v; // whenever we want to create a template, we need to supply a template argument
    // vector<Point_i *> v;
    vector<Point_i> v;
    // Point<int> p;
    // Point_i* p = new Point_i; // uninitialized pointer
    // v.push_back(p);
    // cout << v.size() << "\n";
    // cout << v[0] -> _x << ", " << v[0] -> _y <<  "\n";
    v.resize(1);
    vector<Point_i>::iterator e;
    for(e = v.begin(); e<v.end(); e++){
        cout << e-> _x <<  ", " << e -> _y << endl;
    }
    // Point_i* p = new Point_i;
    // cout << p -> 

    // iterator points to objects/container
    // we can think of iterator as pointer
    
    return 0;
}


