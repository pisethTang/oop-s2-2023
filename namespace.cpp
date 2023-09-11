#include <iostream>
#include <string>
#include <algorithm>

namespace apple{
    name functions(){
    void print(const char* text){
        std::cout << text << std::endl;
    }
    void print_again(){

    }

    }

}

namespace orange{
    void print(const char* text){
        std::string temp = text;
        std::reverse(temp.begin(), temp.end());
        std::cout << temp << std::endl;
    }
}

// symbols: classes, functions, variables
// We can't have two identical symbols: that is a linking error or possibly a compilation error if they are in the same file
// What if we want to have two print() functions?
// What if an included library already has a print() function but we want to identify our own print() function and use it?
// C doesn't have namespaces. 
// namespaces exist to avoid naming conflict. We want to call symbols with the same names in different context



int main(){
    // using namespace apple; // import every function from the apple namespace as if I have never satisfied it as a namespace
    using apple::print;

// we can create alias for namespace
    using a = apple;
    a::print();

    apple::print("Hello"); // :: scope resolution operator allows you to call 
    // a class is a namespace in its own
    apple::print_again();
    std::cin.get();

    
    return 0;
}