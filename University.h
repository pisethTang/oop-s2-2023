#ifndef UNIVERISTY_H
#define UNIVERSITY_H
#include <string.h>
#include "Course.h"

class University: public Course{
    private:
        // University' name and location
        std::string name;
        std::string location;
        
        // Courses
        Course* courses; // array of courses or an array of pointers to courses' content
        int course_capacity;
        int current_num_students_in_course;
    public:
        void addCourse(int id, std::string name);

        // setters
        void setName(std::string name);
        void setLocation(std::string location);

        //getters
        std::string getName();
        std::string getLocation();

};


#endif