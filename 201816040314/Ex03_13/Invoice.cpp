#ifndef INVOICE_H_INCLUDED
#define INVOICE_H_INCLUDED
#include <iostream>
using namespace std;
class Invoice//declare a class
{
public:
    Invoice(string,string,int,int);//the constructor with three parameter
    void setPartId(string);// the function is to set the part id
    void setPartDis(string);// the function is to set the part description
    void setAllSale(int);// the function is to set the sale number
    void setSinglePrice(int);// the function is to set the single price
    void display();// the function is to display the content
    string getPartId();// the function is to get the part id
    string getPartDis();// the function is to set the part description
    int getAllSale();// the function is to get the sale number
    int getSinglePrice();// the function is to get the single price
    int getInvoiceAmount();// the function is to get the invoice amount

private:
    string partId;
    string partDis;
    int allSale;
    int singlePrice;
};


#endif // INVOICE_H_INCLUDED
