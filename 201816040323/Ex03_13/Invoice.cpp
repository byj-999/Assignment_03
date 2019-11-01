#include <iostream>
using namespace std;

#include "Invoice.h"

Invoice::Invoice(string pn,string pd,int sales,int price)
{
    setPN(pn);
    setPD(pd);
    setSales(sales);
    setPrice(price);
}

void Invoice::setPN(string pn)
{
    PN=pn;
}
string Invoice::getPN() const
{
    return PN;
}
void Invoice::setPD(string pd)
{
    PD=pd;
}
string Invoice::getPD() const
{
    return PD;
}
void Invoice::setSales(int sales)
{
    Sales=sales;
}
int Invoice::getSales() const
{
    return Sales;
}
void Invoice::setPrice(int price)
{
    Price=price;
}
int Invoice::getPrice() const
{
    return Price;
}
int Invoice::getInvoiceAmount()
{
    InvoiceAmount=Sales*Price;
    return InvoiceAmount;
}
