#include <iostream>
#include <tuple> // std::tuple, std::get, std::tie, std::ignore


std::tuple<int, int> getPos(std::tuple<int, int> &position){
    return {std::get<0>(position) + 1, std::get<1>(position) + 100};
}

void printTuple(std::tuple<int, int> T){
    std::cout << "("  << std::get<0>(T) << ", " << std::get<1>(T) << ")" << std::endl;
}


int main(){
    std::tuple<int, char> foo (10, 'z');
    auto bar = std::make_tuple("test", 3.1, 14, 'y');

    std::get<2> (bar); // access element
    int myint;
    char mychar;

    // std::tie (myint, mychar) = foo; // unpack element
    // std::tie (std::ignore, std::ignore, myint, mychar) = bar; // unpack (with ignore)

    mychar = std::get<3>(bar);

    std::get<0>(foo) = std::get<2>(bar); 
    std::get<1>(foo) = mychar;

    std::cout << "foo contains: ";
    std::cout << std::get<0>(foo) << ", " << std::get<1> (foo) << '\n';

    std::cout << "\n--------------------------------------------\n";
    std::tuple<int, int> c(1,2);
    // std::cout << "(" << std::get<0>(c) << ", " << std::get<1>(c) << ")\n";
    printTuple(c);
    c = getPos(c);
    printTuple(c);


    return 0;
}