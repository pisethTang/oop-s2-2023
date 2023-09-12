#ifndef GRADE_H
#define GRADE_H
#include <string.h>

class Grade{
    private:
        std::string assignment;
        int value;
    public:
        Grade(std::string assignment, int value);
        Grade();
        //setters
        void setAssignment(std::string assignment);
        void setValue(int value);
        
        // getters
        std::string getAssignment();
        int getValue();



};


#endif