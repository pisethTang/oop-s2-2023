#include "Grade.h"


//defined constructor
Grade::Grade(int id, std::string name){
    this->id = id;
    this->name = name;
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

