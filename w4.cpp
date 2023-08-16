#include<iostream>

using namespace std;



//  everything inside a class is private by default unlike a struct
/*class A{
    private:
        int _x;
    public:
    A(int x){
        _x = x;
    }
    int get_x(){return _x;}
};

class B{
    private:
        int _x;
    public:
    A(int x): _x(x){}
    A():A(0){}
    int get_x(){return _x;}
};


class C{
    int x;
};*/
class A{
    private : int _x;
    public:
    A(int x){
        _x = x;
    }

};

int main(){
    // A a; // since we are not using a default constructor, which has no arguments, the one that we defined requires one argument 
    // so we MUST also provide one argument, in this case an integer.
    // A a(10);
    // cout << a.get_x() << endl;    

    // B b;
    // cout << b.get_x() << endl;
    A a(5);
    cout << a._x << endl;




    return 0;
}