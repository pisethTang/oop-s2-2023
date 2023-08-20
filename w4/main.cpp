#include<iostream>

#include<string>


using namespace std;

class Student{
    private:
    string name;
    int ID;

    double grade;
    Student(){
        name = "";
        ID = 0;
        grade = 0.0;
    }
    public:
    Student(string name){
        this->name = name;
        ID = 0;
        grade = 0.0;
    }
    Student(string s_name, int s_ID, double s_grade); // set declaration of function
    Student(int s_ID, double s_grade);

    // Student(string s_name, int s_ID, double s_grade){
    //     name = s_name;
    //     ID = s_ID;
    //     grade = s_grade;
    // }

    
    // Getters
    string get_name(){return name;}
    int get_ID(){return ID;}
    double get_grade(){return grade;}

    // Setters
    void set_name(string new_name){name = new_name;}
    void set_ID(int new_ID){ID = new_ID;}
    void set_grade(double new_grade){grade = new_grade;}
    
    
    bool is_pass(); // declaration

};

// Implementation or definition of function
Student::Student(string s_name, int s_ID, double s_grade){
        name = s_name;
        ID = s_ID;
        grade = s_grade;
}

Student::Student(int s_ID, double s_grade){
        // name = "helloooo";
        ID = s_ID;
        grade = s_grade;
}


bool Student::is_pass(){
    if(grade > 50) return true;
    return false;
}




int main(){ 
    Student s1("neeo");
    cout << s1.get_name() << "\n";
    /*double h;
    cout << "size of h = " << sizeof(h) << "\n";
    cout << "size of s1 = " << sizeof(s1) << "\n";
*/
    s1.set_name("Seth");
    s1.set_ID(1);
    s1.set_grade(12.3);
    cout << s1.get_name() << "\n";
    cout << s1.get_ID() << "\n";
    cout << s1.get_grade() << "\n";
    cout << s1.is_pass() << "\n";
    cout << "--------------------\n"; 
    
    Student s2(12, 32.93);
    cout <<s2.get_name() << "\n";
    cout <<s2.get_ID() << "\n";
    cout <<s2.get_grade() << "\n";




    // s1.set_name("ewewf");
    // cout << s1.get_name() << "\n";



    return 0;
}


/*
Objects are programming constructs that abstract entities from the rpoblem doamin:
- They states: attributes and their values
- they have behaviour: what they can do

Classes define the behaviou of objects; classes have egenric states and are instantiated by objects

A class definition is like a type: collections of objects of the same class can be formed into arrays


*/







