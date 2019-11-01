#include <iostream>
//#include
using namespace std;

#include "Invoice.h" // include definition of class Employee

// function main begins program execution
int main()
{
    string a,b;
    int x,y;
    cout<<"请输入相关量";
    cin>>a;
    cin>>b;
    cin>>x;
    cin>>y;
    Invoice Invoice1(a,b,x,y);

    cout<<Invoice1.getInvoicePd()<<" "<<Invoice1.getInvoicePN()<<" "<<Invoice1.getInvoiceprice()<<" "<<Invoice1.getInvoicesales()<<" "<<Invoice1.InvoiceAmount(x,y);
    int sales,price;
    //cout<<"现在的情况：";





}
