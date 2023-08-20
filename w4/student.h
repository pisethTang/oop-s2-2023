#include <string>
using namespace std;

class Student{
    private:
    string name;
    int ID;

    double grade;
    // Student(){
    //     name = "";
    //     ID = 0;
    //     grade = 0.0;
    // }
    public:
    Student(string name){
        this->name = name;
        ID = 0;
        grade = 0.0;
    }
    Student();
    Student(string s_name, int s_ID, double s_grade); // set declaration of function
    Student(int s_ID, double s_grade);

    // Student(string s_name, int s_ID, double s_grade){
    //     name = s_name;
    //     ID = s_ID;
    //     grade = s_grade;
    // }

    // Destructor: a member of a function of a class that is called automatically when an object of the class goes out of scope or a 
    // pointer to the object is deleted.
    // Destructors are used to eliminate any dynamic variables that have been created by the object so that the memory occupied 
    // by these variables is returned to the freestore. Destructors may perform other cleanup tasks as well.
    ~Student(); 

    
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


//  we can use the initialization list which is often more efficient(less assignments and quicker)
// Student::Student():name("Placeholder"), ID(0), grade(0.0){
//     cout << "An object of class Student was created.\n";
// }// default calculator

Student::Student(): Student("Placeholder", 0, 0.0){
    // cout << "An object of class Student was created!!\n";
}


Student::Student(int s_ID, double s_grade){
        name = "helloooo";
        ID = s_ID;
        grade = s_grade;
}


bool Student::is_pass(){
    if(grade > 50) return true;
    return false;
}


Student::~Student(){
    // cout << "The destructor has been called! -> a student object has been deleted!\n";

}