#include <iostream>
#include<string>
using namespace std;

#include "Invoice.h" // include definition of class Invoice

// Invoice constructor initializes data member partNumber,partDescription,saleNumber and unitPrice
Invoice::Invoice( string partNumber,string partDescription,int saleNumber,int unitPrice)
{
    setPartNumber(partNumber);// initializes partNumber
    setPartDescription(partDescription);// initializes partDescription
    setSaleNumber(saleNumber);// initializes saleNumber
    setUnitPrice(unitPrice);// initializes unitPrice
} // end Invoice constructor

// function to set the part number
void Invoice::setPartNumber( string num )
{
   partNumber=num;
} // end function setPartNumber

// function to retrieve the part number
string Invoice::getPartNumber()
{
    return partNumber;
}// end function getPartNumber

// function to set the part description
void Invoice::setPartDescription(string ch)
{
    partDescription=ch;
}// end function setPartDescription

// function to retrieve the part description
string Invoice::getPartDescription()
{
    return partDescription;
}// end function getPartDescription

// function to set the sale number
void Invoice::setSaleNumber(int num)
{
    if(num<0)
        saleNumber=0;//Revise and Judge
    else
        saleNumber=num;
}// end function setSaleNumber

// function to retrieve the sale number
int Invoice::getSaleNumber()
{
    return saleNumber;
}// end function getSaleNumber

// function to set the unit price
void Invoice::setUnitPrice(int amount)
{
    if(amount<0)//Revise and Judge
        unitPrice=0;
    else
        unitPrice=amount;
}// end function setUnitPrice

// function to retrieve the unit price
int Invoice::getUnitPrice()
{
    return unitPrice;
}// end function getUnitPrice

// function to retrieve the invoice account
int Invoice::getInvoiceAmount()
{
    int a;
    a=saleNum*unitPrice;//Calculate product
    return a;
}// end function getInvoiceAmount
