#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include "Grade.h"
#include "Student.h"
#include "Course.h"

class Gradebook: public Grade, Student{
    private:
        Grade* grades;
        int student_id;
        int gradebookSize;
        int count;
    public:
        //constructor
        Gradebook();

        // we won't define one here and let it be the default constructor
        Gradebook(int gradebookSize);
        //add grade
        void addGrade(int stud_id, int course_id, std::string assignment, int value);

        ~Gradebook();
};



#endif