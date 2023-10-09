#include <iostream>
#include <stack>

void ex1(std::string expression){
    std::stack<char> charStack;
    
}


int main(){
    std::stack<int> intStack; //empty stack

    // fill up the stack
    for(size_t ix = 0;ix!= 10;ix++){
        intStack.push(ix); //intStack holds 0...9 inclusive
    }

    std::cout << "Popping out elements:....";
    while(!intStack.empty()){
        int value = intStack.top();
        //code that uses value
        std::cout << value << "...";
        // std::cin.get();
        intStack.pop(); // pop the top element, and repeat
    }
    // std::cout << std::endl;
    std::cout << "\n";
    return 0;
}