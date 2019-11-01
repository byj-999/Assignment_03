// homework1: Invoice.cpp
// Member-function definitions for class Invoice.
#include <iostream>
#include <string>
using namespace std;

#include "Invoice.h" // include definition of class Invoice

// Invoice constructor initializes data member balance
Invoice::Invoice(string PN,string description,int sell,int price)
    :partNumber(PN),partDescription(description),sales(sell),unitPrice(price)
    {

    }
//define set/get function
void Invoice::setPartNumber(string PN)
{
    partNumber=PN;
}
string Invoice::getPartNumber()const
{
    return partNumber;
}
void Invoice::setPartDescription(string description)
{
    partDescription=description;
}
string Invoice::getPartDescription()const
{
    return partDescription;
}
void Invoice::setSales(int sell)
{
    if(sell>=0)
        sales=sell;
    else
        sales=0;
}
int Invoice::getSales()const
{
    return sales;
}
void Invoice::setUnitPrice(int price)
{
    if(price>=0)
        unitPrice=price;
    else
        unitPrice=price;
}
int Invoice::getUnitPrice()const
{
    return unitPrice;
}
//define getInvoiceAmount
int Invoice::getInvoiceAmount()
{
    return getSales()*getUnitPrice();
}
