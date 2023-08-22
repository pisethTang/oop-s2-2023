#include <iostream>
#include <string>
#define LOG(x) std::cout << x << std::endl;

using namespace std;

class A{
    // private members CANNOT be inherited at all.
    protected: // all protected data members of the parent's class becomes private in the child's class.
        int a;
    public:
        // int a;
        void set_a(int new_a){
            this-> a = new_a;
        }
        // get_a() will not be allowed to modify the object
        int get_a() const{
            return a;
        }
        

};


class B : public A { // public inheritance mode: private data and function members in A are hidden to B. Or B can't use private members of A
// all A's public members can still be accessed by B. 
// The private members are still copied over to B, it's just that B can't access it, not without the get and set methods of A, that's also assuming that the getters and setters of A are public.
    private:
        double x;
    public:
    void set_x(double x){
        this -> x = x;
    }
    double foo(){
        return x*get_a();
    }
    void set_a(int new_a){
        if(new_a < 0){
            set_a(0);
            // a = 0;
        }
        else{
            // a = new_a;
            A::set_a(new_a); // calling the parent's getter method
        }
    }
};



int main(){
    A a;
    B b;

    

    // b.set_a(10);
    // LOG(b.get_a());
    b.set_a(10);

    b.set_x(0.12);
    LOG(b.foo());
    


    std::cin.get();
}


/*
Advantages of inheritance:
- We can reuse methods and data of the parent class
- We can extend the existing class by adding new data and new methods
- You can modify the existing class by reimplementing its methods
-

*/