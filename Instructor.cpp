#include "Instructor.h"

Instructor::Instructor(int instructorID)
{
    this->instructorID = instructorID;
}

//setters
void Instructor::setInstructorID(int instructorID)
{
    this->instructorID = instructorID;
}

//getters
int Instructor::getInstructorID()
{
    return instructorID;
}