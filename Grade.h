#ifndef GRADE_H
#define GRADE_H
#include <string>

class Grade{
    protected:
        std::string assignment;
        int value;
        int student_id;
    public:
        Grade(int student_id, std::string assignment, int value);
        Grade();
        //setters
        void setAssignment(std::string assignment);
        void setValue(int value);
        
        // getters
        std::string getAssignment();
        int getValue();



};


#endif