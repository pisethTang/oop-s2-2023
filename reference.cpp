#include<iostream>

#define LOG(x) std::cout << x << std::endl;


// references are just syntax sugar
// anything that you can do with a reference, you can do with a pointer. Pointer is more powerful.
void Increment(int& value){
    value++;
}

int main(){
    int a = 5;
    Increment(a);
    LOG(a);
    int& ref = a; // all you have to do
    // We have created an alias, it's not really a variable, \
    // If you compile this code right now, there're going to be only 1 variable
    ref = 2;
    LOG(a);

    int b = 8;
    ref = b;

    LOG(a);

    int c = 10;
    ref = c;
    LOG(b);
    LOG(a);

    int d = 19;
    ref = d;
    LOG(a);
    // when you declare a reference, you have to initialize it to something,
    //  it's not really a variable and doesn't take up space
    



    std::cin.get();
}