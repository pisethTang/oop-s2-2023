#include "Student.h"

Student::Student(int studentID): Person(name){
    this->studentID = studentID;
}

//setters
void Student::setStudentID(int studentID){
    this->studentID = studentID;
}

//getters
int Student::getStudentID(){
    return studentID;
}
