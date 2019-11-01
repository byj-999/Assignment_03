// homework1: InvoiceTest.cpp
// Create and manipulate invoice objects.
#include <iostream>
#include <string>
using namespace std;

// include definition of class Invoice from Invoice.h
#include "Invoice.h"

// function main begins program execution
int main()
{
    string pn,partdescription;
    int sale,retailprice;//define variable type
    cout<<"Enter the part number of sales for this part: ";
    getline(cin,pn);
    cout<<"Enter the description of sales for this part: ";
    getline(cin,partdescription);
    cout<<"Enter the number of sales for this part: ";
    cin>>sale;
    cout<<"Enter the retailprice of sales for this part: ";
    cin>>retailprice;//input data is assigned to variables
    cout<<"\n";
    Invoice myInvoice(pn,partdescription,sale,retailprice);//create one Invoice objects
    myInvoice.setPartNumber(pn);
    cout<<"The part number: "<<myInvoice.getPartNumber()<<"\n";
    myInvoice.setPartNumber(partdescription);
    cout<<"The description of part: "<<myInvoice.getPartDescription()<<"\n";
    myInvoice.setSales(sale);
    cout<<"Sales of this part: "<<myInvoice.getSales()<<"\n";
    myInvoice.setUnitPrice(retailprice);
    cout<<"Unit price for this part: "<<myInvoice.getUnitPrice()<<"\n";
    cout<<"Total sales of this part: "<<myInvoice.getInvoiceAmount()<<endl;
    //determines the validity of the input data and outputs the specified data
} // end main
