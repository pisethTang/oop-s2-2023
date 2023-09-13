#include "Gradebook.h"

//constrcutor
Gradebook::Gradebook(int gradebookSize)
{
    this -> gradebookSize = gradebookSize;
    grades = new Grade[gradebookSize];
    count = 0;
}

Gradebook::Gradebook(){
    // grades = new Grade[gradebookSize];
    count = 0;
}

//add grade
void Gradebook::addGrade(int stud_id, int course_id, std::string assignment, int value){
    if(count >= gradebookSize){
        // std::cout << "Gradebook is full" << std::endl;
        return;
    }
    count++;
    grades[count-1].setAssignment(assignment);
    grades[count-1].setValue(value);
    // grades[count].setStudentID(stud_id);
    // grades[count].setCourseID(course_id);

}

int Gradebook::getCount(){
    return count;
}

Gradebook::~Gradebook(){
    delete[] grades;
