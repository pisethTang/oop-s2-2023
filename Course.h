#ifndef COURSE_H
#define COURSE_H
#include "Person.h"

class Course{
    private:
        Person** persons;
        int id;
        std::string name; 

        int course_capacity;
        int current_num_students_in_course;
        
    public:
        Course(int id, std::string name, int course_capacity);
        void addPerson(Person* p); // enrolled student into the course(polymorphism)
        
        //setters
        void setCourseCapacity(int course_capacity);
        void setCourseName(std::string name);
        void setCourseID(int id);

        //getters
        int getCourseCapacity();
        int getCourseID();
        std::string getCourseName();

        ~Course();
};



#endif