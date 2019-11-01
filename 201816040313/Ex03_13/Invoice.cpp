#include <iostream>
using namespace std;

#include "Invoice.h" // include definition of class Invoice


Invoice::Invoice(string number,string description,int kindsof,int money)
{
    setinvoicepno(number);
    setinvoicepd(description);
    setinvoicesv(kindsof);
    setinvoiceip(money);
}//Define the constructor. Assign each parameter value to the appropriate data member.
void Invoice::setinvoicepno(string pno)//Define a set function for the part number data member.
{
    invoicepno=pno;
}
string Invoice::getinvoicepno()//Define a get function for the part number data member.
{
    return invoicepno;
}
void Invoice::setinvoicepd(string pd)//Define a set function for the part description data member.
{
    invoicepd=pd;
}
string Invoice::getinvoicepd()//Define a get function for the part description data member.
{
    return invoicepd;
}
void Invoice::setinvoicesv(int sv)//Define a set function for the Commodity output data member.
{
    if(sv<=0)
    {
        sv==0;
        invoicesv=sv;
    }
    if(sv>0)
    {
        invoicesv=sv;
    }

}
int Invoice::getinvoicesv()//Define a get function for the Commodity output data member.
{
    return invoicesv;
}
void Invoice::setinvoiceip(int ip)//Define a set function for the item pricing data member.
{
    if(ip<=0)
    {
        ip==0;
        invoiceip=ip;
    }
    if(ip>0)
    {
        invoiceip=ip;
    }
}
int Invoice::getinvoiceip()//Define a get function for the item pricing data member.
{
    return invoiceip;
}
int Invoice::getInvoiceAmount(int invoicesv,int invoiceip)//Define a get function for the invoice amount.
{
    return invoicesv*invoiceip;
}
