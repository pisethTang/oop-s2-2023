#include <iostream>
#include <map>
#include <vector>
// #include <pair>

class Point{
    private: int _x, _y;
};
typedef std::vector<Point*> Point_v;
typedef std::map<std::string, Point> SetRecords;
typedef std::pair<std::string, Point> Entry;


int main(){
    std::vector<int> v = {4,5,3,2,1,56};
    std::vector<Point> x = {};

    std::map<std::string, size_t> word_count;
    std::string word;
    while(std::cin >> word){
        ++word_count[word];
    }
    for(const auto &w: word_count)
        std::cout << w.first << " occurs " << w.second
                  << ((w.second > 1) ? "times": " time") << std::endl;
                
    



}