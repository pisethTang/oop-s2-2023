#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"

class Student: public Person{
    private:
        int studentID;
    public:
        Student(int studentID);
        //setters
        void setStudentID(int studentID);
        //getters
        int getStudentID();


}



#endif