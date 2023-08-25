#include <iostream>
using namespace std;

class A{
    protected:
        int x;
    public:
        A(){ x = 2;}
};


class B{
    protected:
        int y;
    public:
        B(){y = 2;
        }
};

class C: public A, public B{
    protected:
        int z;
    public:
        C(){
            z = 2;
        }
        double get_result(){return x*z;}
        

};




int main(){
    C c;
    c.get_result();

    return 0;
}