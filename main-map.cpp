#include <iostream>
#include <vector>
#include <map>
#include <string>

class Point{
    public:
        int _x, _y;
};
typedef std::vector<Point*> Point_v;
typedef std::map<std::string, int> StudentRecords;
typedef std::map<std::string, Point> SetRecords;
// typedef std::pair<std::string, int> Entry;
typedef std::pair<std::string, Point> Entry;


int main(){
    // StudentRecords M;
    SetRecords M;
    Point p1 = {100,200};
    Point p2 = {1,20};

    Entry e1 = {"midpoint", p1};
    Entry e2  {"endpoint", p2};

    // M.insert(e1);
    // M.insert(e2);
    M = {e1,e2};
    Point p3 = M["endpoint"];
    std::cout << p3._x << ", " << p3._y << std::endl;
    // int id =M["JB"];


    // std::cout << id << std::endl;
    // for (int i=0;i<M.size();i++){
    //     for(int j=0;j)
    // }
    

    return 0;
}