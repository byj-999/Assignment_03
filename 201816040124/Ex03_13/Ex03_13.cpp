#include <iostream>
using namespace std;

// include definition of class Account from Account.h
#include "Invoice.h"

// function main begins program execution
int main()
{
    int a,b;
    string c,d;
    //Display information to remind input
    cout<<"请输入商品零件号"<<endl;
    getline(cin,c);
    cout<<"零件描述"<<endl;
    getline(cin,d);
    cout<<"售出量"<<endl;
    cin>>a;
    cout<<"单价"<<endl;
    cin>>b;
    Invoice invoice(c,d,a,b);//// create a Invoice object
    //Display information
    cout<<"零件号:"<<invoice.getPartNumber()<<endl;
    cout<<"零件描述:"<<invoice.getPartDescription()<<endl;
    cout<<"售出量:"<<invoice.getSaleNum()<<endl;
    cout<<"单价:"<<invoice.getUnitPrice()<<endl;
    cout<<"发票额:"<<invoice.getInvoiceAmount()<<endl;
} // end main
