#include <string> // program uses C++ standard string class
using namespace std;

// Invoice class definition
class Invoice
{
 public:
    Invoice(string,string,int,int);//Declare a constructor that has one parameter for each data member
    void setinvoicepno(string);//Declare a set method for the invoice's part number
    string getinvoicepno();//Declare a get method for the invoice's part number
    void setinvoicepd(string);//Declare a set method for the invoice's part description
    string getinvoicepd();//Declare a get method for the invoice's part description
    void setinvoicesv(int);//Declare a set method for the invoice's Commodity output
    int  getinvoicesv();//Declare a get method for the invoice's Commodity output
    void setinvoiceip(int);//Declare a set method for the invoice's item pricing
    int  getinvoiceip();//Declare a get method for the invoice's item pricing
    int  getInvoiceAmount(int,int);//Declare a get method for the invoice's invoice amount
private:
    string invoicepno;//Declare a string data member for the invoice's part number
    string invoicepd;//Declare a string data member for the part description
    int    invoicesv;//Declare a int data member for the Commodity output
    int    invoiceip;//Declare a int data member for the item pricing

};

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

#include <iostream>
using namespace std;

#include "Invoice.h" // include definition of class Invoice
int main()
{
    Invoice invoiceSpecies(" "," ",0,0);//Create one Invoice objects and assign them to Invoice variables.
    invoiceSpecies.setinvoicepno("Q31205F32");
    invoiceSpecies.setinvoicepd("中空的棱柱");
    invoiceSpecies.setinvoicesv(50);
    invoiceSpecies.setinvoiceip(20);
    cout << "Part number is :" << invoiceSpecies.getinvoicepno() <<endl;
    cout << "Part description is :"<< invoiceSpecies.getinvoicepd() <<endl;
    cout << "The volume of goods sold is :" <<invoiceSpecies.getinvoicesv() <<endl;
    cout << "The unit price of the goods is :" <<invoiceSpecies.getinvoiceip() <<endl;
    cout << "Invoice amount is :" << invoiceSpecies.getInvoiceAmount(50,20) <<endl;//Output the part number,part description,Commodity output,item pricing and invoice amount for each Invoice.
}
