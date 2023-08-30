#include <iostream>
#include <ctime>

using namespace std;


class A {
private:
    time_t startTime;

public:
    A() {
        startTime = time(nullptr);  // Store the starting time
        std::cin.get();
    }

    ~A() {
        time_t endTime = time(nullptr);  // Get the ending time
        int elapsedSeconds = endTime - startTime;
        std::cout << "Time elapsed: " << elapsedSeconds << " seconds" << std::endl;
    }
};


class B{
    protected:
        int x;
    public:
        B(){
            x = 10;
            cout << "Do nothing\n";
        };
};


class C: public B{
    private:
        int y;
    public:
        C()
        B::x(100)
        {
            // B::x = 10;
            y  = 5;
            cout << "In C's constructor!\n" ;
        }
        void foo(){
            cout << "In foo() : x*y = " << x << "*" << y << " = " << x*y << endl;
        }
};

int main() {
    // A a;  // Instantiate the Timer class
    C c;

    c.foo();
    
    // Your program's code goes here
    // ...

    return 0;  // Timer's destructor will be called here
}
