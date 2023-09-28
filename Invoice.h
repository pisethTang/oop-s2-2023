#ifndef INVOICE_H
#define INVOICE_H
#include <string>


class Invoice{
    protected:
        int invoiceID; // a unique identifier for the invoice
        int dollarsOwed; // the total amount owed in dollars for services

    public:
        Invoice(int invoiceID); // constructor to initialize Invoice object to a given ID
        void addServiceCost(int costDollars); // adds the cost of a service to the current invoice in dollars. Accepts only positive amounts
        int getDollarsOwed(); // returns the total amount owed for the services
        int getInvoiceID(); // returns the unique identifier of an invoice
        ~Invoice();




};



#endif