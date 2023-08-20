#include <iostream>
#include <string>
#include "student.h"
#include<fstream>
using namespace std;


class Classroom{
    private:
        int class_size;
        Student* students_records; //pointer to point to a dynamically allocated array of a student records
    public:
    Classroom(){
        this->class_size = 0;
    };
    Classroom(int a_class_size){
        this->class_size = a_class_size;
        students_records = new Student[class_size];
        
    }
    // Interactive session in w3

    ~Classroom(){
        delete[] students_records; 
    };

    void read_students_record(string filename){
        ifstream students_records_file;
        students_records_file.open(filename);
        for(size_t i=0;i<class_size;i++){
            std::string name;
            int id;
            double grade;

            students_records_file>> name >> id >> grade;
            students_records[i].set_name(name);
            students_records[i].set_ID(id);
            students_records[i].set_grade(grade);
        }

    }
    void print_class_room(){
        for(size_t i=0;i<class_size;i++){
            cout << students_records[i].get_name ()
            << " | " << students_records[i].get_ID() 
            << " | " << students_records[i].get_grade() 
            << "\n";
        }
    }



};

int main(){
    Classroom oop2023(3);

    oop2023.read_students_record("demo_class.txt");
    oop2023.print_class_room();






    return 0;
}
