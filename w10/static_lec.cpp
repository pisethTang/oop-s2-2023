#include <iostream>
using namespace std;


class Fun{
    int i;
    public:
        Fun(){
            i = 0;
            cout << "Constructor ";
        }
        void f2(){ cout << "f2";}
        static void isFun(){ 
            // i++;
            // f2(); 
            //  Static functions can't directly access non-static members(both attributes and methods)
            
            cout << "Fun";
        }
        // ~Fun(){
        //     cout << "Destructor ";
        // }
};




int main(){
    // int x = 0;
    // // lifetime scope = the object can still be used, but it doesn't mean that it can be accessed
    // // visibility scope = usability scope
    
    // if(x == 0){
    //     Fun obj; // obj's lifetime is within this block, or translatable unit. Once obj goes out of scope, it will be destroyed when the destructor is called.
    //              // not when the whole main function ends. Verify that the lifetime of the object is determined by the translatable unit or block that it is instantiated.
    //              // If it is instantiated within a function, then its lifetime ends once it goes out of the function's block, or once the function terminates when a value is returned(either void or non-void functions).
    //              //  BUT the scope is entirely different, its scope or visibility is within the scope or block that you define it, but once the scope is broken, the object will be automatically destroyed.
    //              // However, the lifetime  
    // }


    // obj.Print();
    // cout << "main ";
    // // cout << "\n";
    
    Fun a;
    a.isFun();
    std::cout << std::endl;
    Fun::isFun();
    // std::cout << std::endl;
    // the Fun's isFun() method is shared across all instances of the   
    
    // DON'T USE scope resolution operator on non-static member, it doesn't make sense 
    // Fun::f2();   
}