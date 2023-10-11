#include <exception>
#include <iostream>
#include <string>

class A{
    int* _age;
    public:
        A(){_age=  new int;}
        void set_age(int age){
            if(age < 0 || age > 100) throw std::runtime_error("error");
            // else if(age > 100) throw std::string("error");
            // std::string s = "error";
            *_age = age;
        }
        ~A(){
            delete _age;
            std::cout << "A-\n";
        }

};



int main(){
    try{
    A a;
    a.set_age(10);     
    // std::cout << "All good...?\n";
    // a.set_age(-10);
    // throw(0);
    a.set_age(150); // when an exception is thrown, the object will cleanly be deleted ot avoid memory leak
    }catch(const char* msg){
        // std::exception e;
        std::cerr << msg << std::endl; 
    }catch(int ecode){
        std::cerr << "Error: " << ecode << "\n"; 
    }catch(std::exception const& e){
        std::cerr << e.what() << "\n";
    }catch(...){
        std::cerr << "Unknown error!\n";
    }
    while(1){}
    // the program didn't crash
    std::cout << "Line 31\n";

    return 0;
}