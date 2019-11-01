#include <iostream>
#include <string>
using namespace std;

#include "Invoice.h" // Invoice class definition
// constructor initializes number describe amount and price
// with strings supplied as arguments
Invoice::Invoice( string number, string describe, int amount, int price )
{
   setNumber( number );// initializes number
   setDescribe( describe );// initializes describe
   setAmount( amount );// initializes amount
   setPrice( price );// initializes price
}


void Invoice::setNumber( string number )// function to set the number
{
    Number=number;
}
string Invoice::getNumber()// function to get the number
{
   return Number; // end function getNumber
}


void Invoice::setDescribe( string describe )// function to set the describe
{
    Describe=describe;
}
string Invoice::getDescribe()// function to get the describe
{
    return Describe; // end function getDescribe
}



void Invoice::setAmount( int amount)// function to set the amount
{
    Amount=amount;
}
int Invoice::getAmount()// function to get the amount
{
   return Amount; // end function getAmount
}



void Invoice::setPrice( int price)// function to set the price
{
    Price=price;
}
int Invoice::getPrice()// function to get the price
{
   return Price; // end function getPrice
}


int Invoice::getInvoiceAmount()//判断， 计算发票额
{

    int InvoiceAmount;
    if(Amount<0||Price<0)
    {
        InvoiceAmount=0;
    }
    else
    {
        InvoiceAmount=Amount*Price;
        return InvoiceAmount;
    }

}





