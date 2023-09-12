#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"

class Student: public Person{
    protected:
        int studentID;
    public:
        Student();
        Student(int studentID);
        //setters
        void setStudentID(int studentID);
        //getters
        int getStudentID();


};



#endif