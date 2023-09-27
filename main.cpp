#include <iostream>
#include "UnitTest.h"
#include "EquivalenceTests.h"
#include <limits>


int main(){
    UnitTest unitTest;
    unitTest.runTests();

    EquivalenceTests equivalencetests;
    equivalencetests.runTests();
 
    return 0;
}