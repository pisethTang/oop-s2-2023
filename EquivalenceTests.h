#ifndef EQUIVALENCETEST_H
#define EQUIVALENCETEST_H
#include <iostream>
#include "Addition.h"


class EquivalenceTests{
    public:
        void runTests(){
            testPositiveIntegers();
            testNegativeIntegers();
        }

    private:
        void testPositiveIntegers(){
            Addition addition;
            if(addition.add(1,2) != 3) std::cout << "Test 1 failed!" <<std::endl;
        }

        void testNegativeIntegers(){
            Addition addition;
            if(addition.add(-1,-2) != -3) std::cout << "Test 2 failed" << std::endl;
        }
        

};



#endif