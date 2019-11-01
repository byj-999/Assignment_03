
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Invoice.h"
using namespace std;

Invoice::Invoice(string PN,string Pd,int sales,int price)//declar the Invoice member
{
    setInvoicePN(PN);
    setInvoicePd(Pd);
    setInvoicesales(sales);
    setInvoiceprice(price);

}
void Invoice::setInvoicePN(string PN)//declar the PN member
{
    InvoicePN=PN;
}
string Invoice::getInvoicePN()
{
    return InvoicePN;
}
void Invoice::setInvoicePd(string Pd)//declar the Pd member
{
    InvoicePd=Pd;
}
string Invoice::getInvoicePd()
{
    return InvoicePd;
}
void Invoice::setInvoicesales(int sales)//declar the sales memver
{
    Invoicesales=sales;
}
int Invoice::getInvoicesales()
{
    return Invoicesales;
}
void Invoice::setInvoiceprice(int price)//declar the price member
{
    Invoiceprice=price;
}
int Invoice::getInvoiceprice()
{
    return Invoiceprice;
}
int Invoice::InvoiceAmount(int sales,int price)//declar the InvoiceAmount member
{
    if(sales==0||price==0)
    {
        InvoiceAmount1=0;
    }
    else
    {
        InvoiceAmount1=sales*price;
    }

    return InvoiceAmount1;
}
