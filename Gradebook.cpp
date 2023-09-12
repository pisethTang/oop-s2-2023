#include "Gradebook.h"

//constrcutor
Gradebook::Gradebook(int gradebookSize)
{
    grades = new Grade[gradebookSize];
    count = 0;
}

Gradebook::Gradebook(){
    // grades = new Grade[gradebookSize];
    count = -1;
}

//add grade
void Gradebook::addGrade(int stud_id, int course_id, std::string assignment, int value){
    if(count >= gradebookSize){
        // std::cout << "Gradebook is full" << std::endl;
        return;
    }
    grades[count].setAssignment(assignment);
    grades[count].setValue(value);
    // grades[count].setStudentID(stud_id);
    // grades[count].setCourseID(course_id);

    count++;
}

Gradebook::~Gradebook(){
    delete grades;
}