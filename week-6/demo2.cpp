#include <iostream>
// the same entity(object or function) behaves differently in different scenarios
//function overloading: compiled-time polymorphism
class A{
    protected: int _s;
    public:
        A(int s): _s(s){}
        A(): A(-1){}
        virtual void print(){std::cout << "_s = " << _s << std::endl;}
};

class B: public A{
    private: int _k;
    public:
        B(int k, int s)
        :_k(k), A(s){}
        B(): B(0,0){}
        virtual void print(){
            std::cout << "_s = " << _s << ", _k = " << _k << std::endl;
        }

};

class C: public B{
    private: int _k;
    public:
        C(int k, int s)
        :_k(k), B(s, 1){}
        C(): C(0,0){}
        void print(){
            std::cout << "_k = " << _k << std::endl;
        }

};

void test(A* a){ // static binding, the compiler 
    a -> print();
}


int main(){
    A a1(100);
    B b1(10, 213);

    // a1 = &b1;

    test(&a1); // static binding
    test(&b1);
    C c1(90, 100);
    // test(&b1);
    test(&c1);

    
    return 0;
}