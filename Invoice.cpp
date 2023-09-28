#include "Invoice.h"
#include <iostream>
// Constrcutor
Invoice::Invoice(int invoiceID){
    this -> invoiceID = invoiceID;
    dollarsOwed = 0;
}

void Invoice::addServiceCost(int costDollars){
    if (costDollars > 0) dollarsOwed += costDollars;
}

int Invoice::getDollarsOwed(){
    return dollarsOwed;
}

int Invoice::getInvoiceID(){
    return invoiceID;
}

Invoice::~Invoice(){
    std::cout << "Invoice destructed\n";
}



