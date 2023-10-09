#include <cstdlib>
#include <iostream>
using namespace std;
#include <random>
#include <time.h>

class Student{
    private:
        int id;
        float grade;
        static int count;
    public:
        Student(){
            id = count++; // using the scope resolution operator to specify the class which the attribute belongs to 
            grade = (rand()*100.0)/RAND_MAX;

        }
        float get_grade(){return grade;}
        // int get_count(){return count;}
        static int get_count(){return count;}
        // one should know that static function can't access non-static attributes
        int get_id(){return id;}

};

int Student::count = 1;// static members are intialized outside the class

class ClassroomAdmin{
    public:
        static int count_above(Student** c, int N, float grade){
            int ans = 0;
            for(int i=0;i<N;i++){
                // std::cout << c[i] -> get_grade() <<std::endl;
                if (c[i] -> get_grade() > grade) ans++;
            }
            return ans;
        }


};



int main(){
    srand(time(nullptr));
    // Student s1;
    // Student s2;
    // Student s3;

    // std::cout << s1.get_id() << "\n";
    // std::cout << s2.get_id() << "\n";
    // std::cout << s3.get_id() << "\n";
    
    // std::cout << Student::count << std::endl; //  we can access the static member of a class, since it belongs to a class, not to individual object
    // if the static member is private, you can't use non-static function to access the private static member since the non-static member function needs
    // an object argument
    // std::cout << Student::get_count() << std::endl;

    // instead to access the static private attibute, one has to create a static function
    // std::cout << Student::get_count() << std::endl;


    // Student s1;
    // Student s2;
    // Student s3;

    // std::cout << s1.get_id() << std::endl;
    // std::cout << s2.get_id() << std::endl;
    // std::cout << s3.get_id() << std::endl;
    // 1 
    // 2
    // 3

    // Student s[100];
    // for(int i=0;i<100;i++){
    //     std::cout << i << ":" << s[i].get_id() <<std::endl;
    // }
    int N = 3000;
    // Student* classroom[N];
    // classroom[0] = new Student;
    Student** classroom;
    // create an array of size N that contains N pointers to N objects of type Student
    classroom = new Student*[N];

    // Initialize memory space for each objects of type Student and returning the memory address to each pointer in the declared array within the heap.
    for (int i=0;i<N;i++){
        classroom[i] = new Student;
    }

    // for (int i=0;i<N;i++){
    //     // std::cout << classroom[i]->get_id() << std::endl;
    //     std::cout << classroom[i] -> get_grade() << std::endl;
    // }
    float G = 50.5;
    int ans = ClassroomAdmin::count_above(classroom, N, G);
    std::cout << ans <<  " students scored above " << G << std::endl;
    
    
    return 0;
}

