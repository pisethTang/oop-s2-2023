#include <iostream>
#include <string>
#include "student.h"

using namespace std;

void foo(){
    Student s1;
}

Student* foo1(){
    Student* a = new Student[5];
    return a;
}


int main(){
    // Student* a = new Student[5]; // we need a default constructor for our class if we expect to use an array of objects
    // for(size_t i = 0 ;i<5;i++){
    //     cout << a[i].get_name() << endl;
    // } 
    // To show that the destructor is called when an object goes out of scope or when foo() terminates.
    // foo();
    Student* b = foo1();
    for(size_t i=0;i<5;i++){
        // cout << b[i].get_name() << endl;
        // cout << (b+i) -> get_name() << endl;
        cout << "Address = " << b+i  << "---->" << "Name =" << (*(b+i)).get_name() << endl;
    }

    delete[] b;//when we call this line, we call the destructor of class Student and we don't need to use a for loop because
    // once called, the compiler will deallocate the array 






    return 0;
}