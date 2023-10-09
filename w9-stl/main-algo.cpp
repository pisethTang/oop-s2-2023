#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

class Point{
    public: int _x, _y;
};


int main(int argc, char** c){
    std::vector<int> v = {3,4,1,432,1,45,12};
    std::vector<int>::iterator itr;

    // sort(v.begin(), v.end());   
    std::vector<int>::iterator a = find(v.begin(), v.end(), 4050);
   
    std::cout << *a <<"\n";
    // for(itr=v.begin();itr<v.end();itr++) std::cout << *itr << std::endl;

    return 0;
}