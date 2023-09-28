#ifndef INVOICETEST_H
#define INVOICETEST_H

#include <iostream>
#include "Invoice.h"

class InvoiceTest{
    private:
        void testAddServiceCost(){
        // Test 1
        {
            Invoice invoice(1);
            invoice.addServiceCost(10);
            if(invoice.getDollarsOwed() != 10) std::cout << "Test 1 failed!" <<std::endl;
        }


        // Test 2
        {
            Invoice invoice(1);
            invoice.addServiceCost(20);
            if(invoice.getDollarsOwed() != 20) std::cout << "Test 2 failed!" << std::endl;
        }

        // Test 3
        {
            Invoice invoice(1);
            if(invoice.getDollarsOwed() != 0) std::cout << "Test 3 failed!" <<std::endl;

            invoice.addServiceCost(100);
            invoice.addServiceCost(-90);
            // if(invoice.getDollarsOwed() != 190) 

        }

                        }

        // add more tests below
        void testConstructor(){
            //Test 4
            {
                Invoice invoice(100);
                if(invoice.getInvoiceID() != 100) std::cout << "Test 4 failed!" <<std::endl;
            }
            // Test 5

            {
                Invoice invoice(90+10);
                if(invoice.getInvoiceID() != 100) std::cout << "Test 5 failed!" <<std::endl;
            }
        }    


    public:
        void runTests(){
            testAddServiceCost();
            // add more tests below
            testConstructor();
        }


        
};




#endif