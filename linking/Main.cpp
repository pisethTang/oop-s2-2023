#include <iostream>

void Log(const char* message);

// static keyword indicates that the Multiply() method
// is only built for this translation unit, which in our case, is the Main.cpp file
static int Multiply(int a, int b){
    Log("Multiply");
    return a*b;
}

int main(){
    // std::cout << Multiply(5,8) << std::endl;
    std::cin.get();
}