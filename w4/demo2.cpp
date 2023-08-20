#include <iostream>
#include<string>
#include "student.h"


using namespace std;

Student* student_Factory(){
    Student* k = new Student(); // call the ddefauot constructor

    return k;
}


int main(){
    // Student s1("Seth", 1000, 0.0);
    // Student* p;
    // p = &s1;
    // cout << p-> get_name() << "\n";

    Student* p = new Student("Seth", 1000, 0.0);
    cout << p->get_grade() << "\n";
    cout << p->get_ID() << "\n";
    cout << p->get_name() << "\n";
    cout << "-------------------------------\n";

    Student* ptr_s = student_Factory();
    cout << ptr_s->get_grade() << "\n";
    cout << ptr_s->get_ID() << "\n";
    cout << ptr_s->get_name() << "\n";






    return 0;
}