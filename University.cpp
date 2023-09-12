#include "University.h"

//constructor 
University::University(std::string name, std::string location, int course_capacity){
    this->name = name;
    this->location = location;
    this-> current_num_courses_in_uni = 0;
    courses = new Course[course_capacity];
}

//add course to the university
void University::addCourse(int id, std::string name){
    if(current_num_courses_in_uni >= this->course_capacity){
        // std::cout << "University is full" << std::endl;
        return;
    }

    // if the course capacity hasn't been reached
    courses[current_num_courses_in_uni].setCourseID(id);
    courses[current_num_courses_in_uni].setCourseName(name);
    current_num_courses_in_uni++;
}

//setters
void University::setName(std::string name){
    this->name = name;
}

void University::setLocation(std::string location){
    this->location = location;
}


//getters
std::string University::getName(){
    return this->name;
}

std::string University::getLocation(){
    return this->location;
}

University::~University(){
    delete courses;
}