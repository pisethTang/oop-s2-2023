#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include "Person.h"

class Instructor{
    private:
        int instructorID;
    public:
        Instructor(int instructorID);
        //setters
        void setInstructorID(int instructorID);
        //getters
        int getInstructorID();
};




#endif