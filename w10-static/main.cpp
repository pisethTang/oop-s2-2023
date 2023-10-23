#include <cstdlib>
#include <iostream>
#include <random>
#include <time.h>
using namespace std;

class Student{
    private:
        int id;
        float grade;
        static int count;
    public:
        // static int count;
        Student(){
            // id = Student::count++;
            id = this -> count++;
            // id = count++;
            // the above three implementations are identical
            grade = rand()*100.0/RAND_MAX; // grade is set to a random number between 0 and 100
        }
        
        static int get_count(){return count;}
        // a non-static method can return static attribute
        // BUT! the converse is not true
        // a static method MUST handle ONLY static attribute

        float get_grade(){return grade;}
        int get_id(){return id;}

};
int Student::count = 100;


class ClassroomAdmin{
    public:
        static int count_above(Student** c, int N, float grade){
            int ans = 0;
            for (int i=0;i<N;i++){
                if (c[i] -> get_grade() > grade) ans++;
                // std::cout << c[i] -> get_grade() << std::endl;
            }          
            return ans;
        }

};


int main(){
    srand(time(nullptr));
    // Student s1;
    // Student s2;
    // Student s3;

    // std::cout << s1.get_id() << std::endl;
    // std::cout << s2.get_id() << std::endl;
    // std::cout << s3.get_id() << std::endl;
    // // std::cout << Student::count << std::endl;
    // std::cout << Student::get_count() << std::endl;
    // std::cout << s1.get_count() << std::endl;
    // Student s[100];
    // for(int i=0;i<100;i++) std::cout << s[i].get_id() <<std::endl;

    int N = 1000; 
    // Student* classroom[N]; // an array of 1000 pointers to objects of type Student
    // classroom[0] = new Student;
    Student** classroom; // equivalent to Student* classroom[N]
    classroom = new Student*[N]; // don't froget to initialize the pointer
    for (int i=0;i<N;i++){
        classroom[i] = new Student;
    }

    // for (int i=0;i<N;i++){
    //     std::cout << classroom[i] -> get_grade() << std::endl;
    // }   
    float pass_grade = 50.0;
    int ans = ClassroomAdmin::count_above(classroom, N, pass_grade);
    std::cout << ans << " students scored above " << pass_grade << std::endl;


    return 0;
}
