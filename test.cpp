#include <cstdlib>
#include <iostream>
#include <tuple> // std::tuple, std::get, std::tie, std::ignore
#include <time.h>
#include <limits>


// std::tuple<int, int> getPos(std::tuple<int, int> &position){
//     return {std::get<0>(position) + 1, std::get<1>(position) + 100};
// }

// void printTuple(std::tuple<int, int> T){
//     std::cout << "("  << std::get<0>(T) << ", " << std::get<1>(T) << ")" << std::endl;
// }

// std::tuple<int, int> generateRandPos(){
//     srand(time(nullptr));
//     int r1 = rand() % 10 + 1; // generate random number between 1 to 10 
//     int r2 = rand() % 10 + 20; // generate random number between 2 to 10
//     return {r1, r2};
// }

class A{
    private: int x;
    public:
        A(){}
        virtual void X(){}
        void setX(int s){x = s;}
        ~A(){}
};


// class B{
//     public:
//     class C{
//         private: 
//             char x;
//             int s;
//         // public:
//             int X(){return 10;}
//             C(){ }
//             ~C(){ }
//     };

// };

class B: public A{
    private: int s;
    public:
        B(){ }
        void X(){
            std::cout << "B\n"; 
            setX(-10);
            s = 100;
        }
        ~B(){ }
};


class C: public A{
    private:
        char n;
        double d;
    public:
        C(){ }
        void X(){
            std::cout << "C\n"; 
            setX(100);
            n = 'q';
            d = 10.23;
        }
};


int main(){
    A** a = new A*[2];
    a[0] = new B;
    a[1] = new C;

    for(int i=0;i<2;i++){
        a[i] -> X();
    }
    // B::C L; // use a scope resolution operator as the named C is only defined within the scope B
    // std::cout << L.X() << std::endl;



    for(int i=0;i<2;i++) delete a[i];
    delete[] a;
    
    // std::tuple<int, char> foo (10, 'z');
    // auto bar = std::make_tuple("test", 3.1, 14, 'y');

    // std::get<2> (bar); // access element
    // int myint;
    // char mychar;

    // std::tie (myint, mychar) = foo; // unpack element
    // std::tie (std::ignore, std::ignore, myint, mychar) = bar; // unpack (with ignore)

    // mychar = std::get<3>(bar);

    // std::get<0>(foo) = std::get<2>(bar); 
    // std::get<1>(foo) = mychar;

    // std::cout << "foo contains: ";
    // std::cout << std::get<0>(foo) << ", " << std::get<1> (foo) << '\n';

    // std::cout << "\n--------------------------------------------\n";
    // std::tuple<int, int> c(1,2);
    // // std::cout << "(" << std::get<0>(c) << ", " << std::get<1>(c) << ")\n";
    // printTuple(c);
    // c = getPos(c);
    // printTuple(c);

    // srand(time(nullptr));
    // std::cout << rand() << std::endl;
    // std::cin.get();
    // std::cout << RAND_MAX-1 << std::endl;
    // RAND_MAX = 1;
    // while(true){
    //     if(RAND_MAX != std::numeric_limits<int>::max()) break;
    //     std::cout << RAND_MAX << std::endl;
    // }
    
    // for(int i=0;i<10;i++){
    //     std::tuple<int, int> pos = generateRandPos();
    //     printTuple(pos);
    //     std::cin.get();
    // }
    
    
    
    
    
    return 0;
}