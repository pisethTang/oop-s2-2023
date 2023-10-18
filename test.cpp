#include <iostream>
#include <tuple>


int main(){
    std::tuple<int, int> X = std::make_tuple(1,2);
    std::cout << X << std::endl;


    return 0;
}