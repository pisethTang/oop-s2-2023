#include "Student.h"

Student::Student(int studentID){
    this->studentID = studentID;
}

Student::Student(){
    this -> studentID = 0;
}

//setters
void Student::setStudentID(int studentID){
    this->studentID = studentID;
}

//getters
int Student::getStudentID(){
    return studentID;
}
