#include <iostream>
#include "UnitTest.h"
#include "EquivalenceTests.h"
#include "InvoiceTest.h"


int main(){
    UnitTest unitTest;
    // unitTest.runTests();

    EquivalenceTests equivalencetests;
    // equivalencetests.runTests();

    InvoiceTest invoiceTest;
    invoiceTest.runTests(); 


    return 0;
}