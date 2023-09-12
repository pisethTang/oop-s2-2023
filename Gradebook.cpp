#include "Gradebook.h"

//constrcutor
Gradebook::Gradebook(int count): Grade(grade), Student(studentID){
    this->count = count;
    grades = new Grade[gradebookSize];
    count = 0;
}

//add grade
void Gradebook::addGrade(int stud_id, int course_id, std::string assignment, int value){
    if(count >= gradebookSize){
        std::cout << "Gradebook is full" << std::endl;
        return;
    }
    
    count++;
}

