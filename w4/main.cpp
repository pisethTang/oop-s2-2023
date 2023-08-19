#include<iostream>

#include<string>


using namespace std;

class Student{
    private:
    string name;
    int ID;
    double grade;

    public:
    // Getters
    string get_name(){return name;}
    int get_ID(){return ID;}
    double get_grade(){return grade;}

    // Setters
    void set_name(string new_name){name = new_name;}
    void set_ID(int new_ID){ID = new_ID;}
    void set_grade(double new_grade){grade = new_grade;}




};

int main(){ 
    Student s1;
    double h;
    cout << "size of h = " << sizeof(h) << "\n";
    cout << "size of s1 = " << sizeof(s1) << "\n";

    s1.set_name("Seth");
    s1.set_ID(1);
    s1.set_grade(12.3);
    cout << s1.get_name() << "\n";


    s1.set_name("ewewf");
    cout << s1.get_name() << "\n";

    return 0;
}