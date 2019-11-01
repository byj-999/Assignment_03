// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;
//#define INVOIE_H
// Employee class definition
class Invoice
{
public://declar the three public member

    Invoice(string,string,int,int);
    void setInvoicePN(string);
    void setInvoicePd(string);
    void setInvoicesales(int);
    void setInvoiceprice(int);
    string getInvoicePN();
    string getInvoicePd();
    int getInvoicesales();
    int getInvoiceprice();
    int InvoiceAmount(int,int);

private:
     string InvoicePN;
     string InvoicePd;
     int Invoicesales;
     int Invoiceprice,InvoiceAmount;
   /
}; // end class Invoice
