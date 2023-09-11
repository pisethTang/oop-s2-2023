#include <iostream>
#include <string>

class A{
    protected:
        int _s;
    public:
        A(int s): _s(s){}
        A():A(-1){}
        void add(int j){
            std::cout << "add2" <<std::endl;
            _s += j;
        }

        void add(double j){
            std::cout << "add2" <<std::endl;
            _s *= j;
        }
        void print(){
            std::cout << "In print() 1: " << "_s = " << this -> _s << std::endl;
        }
        void print(int x){
            std::cout << "In print() 2: " << std::endl;
        }
};

class B: public A{
    private:
        int _k;
    public:
        B(int s, double k): A(s), _k(k){}
        B():B(0,0){}
        void print(){
            std::cout << "In print() 3: " << "_s = " << this -> _s << ", _k = " << this -> _k << std::endl; 
        }


};


int main(){
    B b1(1,2);
    b1.A::print(10);
    b1.print();



    return 0;
}