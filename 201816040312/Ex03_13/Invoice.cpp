//类的实现
#include <iostream>
using namespace std;

#include"Invoice.h"

Invoice::Invoice(string a,string b,int c,int d)//initializes type describe number price
{
    settype(a);
    setdescribe(b);
    setnumber(c);
    setprice(d);
}
void Invoice::settype(string a)//initializes the type
{
    type=a;
}
string Invoice::gettype()
{
    return type;
}
void Invoice::setdescribe(string b)//initializes the describe
{
    describe=b;
}
string Invoice::getdescribe()
{
    return describe;
}
void Invoice::setnumber(int c)//initializes the number
{
    if(c>=0)
        number=c;
    else
        number=0;
}
int Invoice::getnumber()
{
    return number;
}
void Invoice::setprice(int d)//initializes the price
{
    if(d>=0)
        price=d;
    else
        price=0;
}
int Invoice::getprice()
{
    return price;
}
int Invoice::getInvoiceamount()
{
    return number*price;
}
