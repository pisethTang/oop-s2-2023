#include <iostream>
// the same entity(object or function) behaves differently in different scenarios
//function overloading: compiled-time polymorphism
class A{
    protected: int _s;
    public:
        A(int s): _s(s){}
        A(): A(-1){}
        virtual void print(){std::cout << "_s = " << _s << std::endl;} // the virtual keyword allows dyanmic/run-time binding
};

class B: public A{
    private: int _k;
    public:
        B(int k, int s)
        :_k(k), A(s){}
        B(): B(0,0){}
        void print(){
            std::cout << "_s = " << _s << ", _k = " << _k << std::endl;
        }

};

class C: public A{
    private: std::string _str;
    public:
        C(int s, std::string str)
        :_str(str), A(s){}
        C(): C(0,""){}
        void print(){
            std::cout << "_str = " << _str << ", _s = " << _s << std::endl;
        }

};

void test(A* a){ // static binding, the compiler 
    a -> print();
}


int main(){
    // A a1(100);
    // B b1(10, 213);
    // C c1(90, 100);

    A* a[3];
    a[0] = new C();
    a[1] = new B();
    a[2] = new A();
    for(int i=0;i<3;i++){
        std::cout << i+1 << ". ";
        test(a[i]);
    }
    // a1 = &b1;

    // test(&a1); // static binding
    // test(&b1);
    // // test(&b1);
    // test(&c1);

    
    return 0;
}