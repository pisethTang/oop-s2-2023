#ifndef SUPERTEST_H
#define SUPERTEST_H

#include "UnitTest.h"
#include "EquivalenceTests.h"

class SuperTest{
    public:
        void runAllTests(){
            UnitTest unitTests;
            unitTests.runTests();
            EquivalenceTests equivalenceTests;
            equivalenceTests.runTests();
        }
};



#endif