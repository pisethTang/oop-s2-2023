#ifndef COURSE_H
#define COURSE_H
#include "Person.h"

class Course{
    private:
        Person** persons;
        int id;
        std::string name; 

        int course_capacity; // maximum number of students that can be enrolled in the course
        int current_num_students_in_course;
        
    public:
        Course(int id, std::string name, int course_capacity);
        Course();
        void addPerson(Person* p); // enrolled student into the course(polymorphism)
        
        //setters
        void setCourseCapacity(int course_capacity);
        void setCourseName(std::string name);
        void setCourseID(int id);

        //getters
        int getCourseCapacity();
        int getCourseID();
        std::string getCourseName();

        virtual ~Course();
};



#endif