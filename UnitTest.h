#include <iostream>
#include "Addition.h"

class UnitTest{
    private:
        void testAddition(){
            Addition addition;
            if(addition.add(1,2) != 3){
                std::cout << "Test 1 failed!" <<std::endl;
            }
            // Add more tests here
            else if(addition.add(100,200) != 300) std::cout << "Test 2 failed!" <<std::endl;
            else if(addition.add(0, 9) != 9) std::cout << "Test 3 failed!" <<std::endl;
            else if(addition.add(10, 10) != 20) std::cout << "Test 4 failed!" <<std::endl; 
            // else std::cout << "All tests passed!" <<std::endl;
        }
    public:
        void runTests(){
            testAddition();
        }
};
