#include <iostream>
#include "Addition.h"


class EquivalenceTests{
    private:
        void testPositiveIntegers(){
            Addition addition;
            if (addition.add(5,10) != 15) std::cout << "Test 1 failed!" << std::endl;
        }

        void testNegativeIntegers(){
            Addition addition;
            if (addition.add(-4,-5) != -9) std::cout << "Test 2 failed!" <<std::endl;
        }
        // Add other test functions here
        void bothNP(){
            Addition addition;
            if (addition.add(1,-29) != -28) std::cout << "Test 3 failed!" <<std::endl;
        }

        void bigPos(){
            Addition addition;
            if (addition.add(200000, 500000) != 700000) std::cout << "Test 4 failed!" <<std::endl;
        }
        void bigNeg(){
            Addition addition;
            if (addition.add(-200000, -500000) != -700000) std::cout << "Test 5 failed!" <<std::endl;
        }

        void special(){
            Addition addition;
            if (addition.add(1,-1) != 0) std::cout << "Test 6 failed!" <<std::endl;
        }

        void one_more(){
            Addition addition;
            if (addition.add(10, 10) != 20) std::cout << "Test 7 failed!"<<std::endl;
        }




    public:
        void runTests(){
            testPositiveIntegers();
            testNegativeIntegers();
            // Add other tests here
            bothNP();
            bigPos();
            bigNeg();
            special();
        }


};
