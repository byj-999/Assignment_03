#ifndef INVOICE_H
#define INVOICE_H
#include <string>
using namespace std;

class Invoice
{
    public:
        Invoice(string,string,int,int);
        void setPN(string);
        string getPN()const;
        void setPD(string);
        string getPD()const;
        void setSales(int);
        int getSales()const;
        void setPrice(int);
        int getPrice()const;
        int getInvoiceAmount();
    private:
        string PN;
        string PD;
        int Sales;
        int Price;
        int InvoiceAmount;
};
#endif
