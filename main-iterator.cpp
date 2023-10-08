#include <iostream>
#include <map>
#include <vector>

class Point{
    public: int _x, _y;
    // private: int _x, _y;
};

typedef std::vector<Point*> Point_v;
typedef std::map<std::string, Point> SetRecords;
typedef std::pair<std::string, Point> Entry;

int main(){
    // std::vector<int> v = {4,5,3,2,1,56};

    // std::map<std::string, size_t> word_count;
    // std::string word;
    // while(std::cin >> word){
    //     ++word_count[word];
    // }
    // for(const auto &w: word_count)
    //     std::cout << w.first << " occurs " << w.second
    //               << ((w.second > 1) ? "times": " time") << std::endl;
                
    // std::vector<int>::iterator itr;
    // for(itr=v.begin(); itr<v.end();itr++){
    //     std::cout << *itr << std::endl; //itr is a pointer to an object in a container, in this case, the vector.
    // }

    std::vector<Point> x = {{21,3}, {12,4}, {12,9}, {93,1}};
    std::vector<Point>::iterator i1;
    for(i1 = x.begin(); i1<x.end();i1++)
        std::cout << i1 -> _x << ", " << i1 -> _y << "\n";


}