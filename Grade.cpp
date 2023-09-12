#include "Grade.h"


//defined constructor
Grade::Grade(int student_id, std::string assignment, int value){
    this -> student_id = student_id;
    this -> assignment = assignment;
    this -> value = value;
}

Grade::Grade(){
    student_id = 0;
    assignment = "";
    value = 0;
}

//defining our setters
void Grade::setAssignment(std::string assignment){
    this->assignment = assignment;
}

void Grade::setValue(int value){
    this->value = value;
}


//getters
std::string Grade::getAssignment(){
    return assignment;
}

int Grade::getValue(){
    return value;
}

