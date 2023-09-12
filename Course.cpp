#include "Course.h"

Course::Course(int id, std::string name, int course_capacity){
    this->id = id;
    this->name = name;
    this->persons = new Person*[course_capacity];
    this->current_num_students_in_course = 0;
}

Course::Course(){
    this->id = 0;
    this->name = "";
    this->persons = new Person*[10];
    this->current_num_students_in_course = 0;
}

void Course::addPerson(Person* p){
    if(this->current_num_students_in_course == this->course_capacity){
        // std::cout << "Course is full" << std::endl;
        return;
    }

    // if the course capacity hasn't been reached
    this->persons[this-> current_num_students_in_course] = p;
    this->current_num_students_in_course++;
}


//definning our setters 
void Course::setCourseCapacity(int course_capacity){
    this->course_capacity = course_capacity;
}

void Course::setCourseName(std::string name){
    this->name = name;
}

void Course::setCourseID(int id){
    this->id = id;
}


// defining our getters
int Course::getCourseCapacity(){
    return this->course_capacity;
}

int Course::getCourseID(){
    return this->id;
}

std::string Course::getCourseName(){
    return this->name;
}


Course::~Course(){
    //delete each person(both instructor and student) in the course
    for(int i=0;i<current_num_students_in_course;i++){
        delete this->persons[i];
    }

    delete[] this->persons;
}

