#include <iostream>
#include <vector>


struct Point{
    public:
        int _x, _y;
};

// typedef std::vector<Point> Point_v;
typedef std::vector<Point*> Point_v;
int main(){
    // std::vector<int> v = {21,42,4,2,91};
    // std::cout << v.size() << std::endl;
    
    // std::vector<Point> v;
    Point_v v;
    Point p1 = {10,20};
    Point p2 = {2,12};
    v.push_back(&p1);
    v.push_back(&p2);

  

    v.resize(3);
    // std::cout << v.size() << std::endl;
    // for(int i=0;i<v.size();i++){
    //     // std::cout << v[i] -> _x << ", " << v[i] -> _y <<  std::endl;
    //     std::cout << i+1 << ": "<< v[i] << std::endl;
    // }
    if (v[2] == nullptr) std::cout << "Yes\n";
    return 0;
}