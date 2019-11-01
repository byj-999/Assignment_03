#include <iostream>
#include<iomanip>

using namespace std;
#include"Invoice.h"//创建一个名为Invoice的类

Invoice::Invoice(string a,string b,int c,int d)
{
    setA(a);setB(b);setC(c);setD(d);//a is 零件号,b is 零件描述,c is 商品售出量,d is 商品单价
}
void Invoice::setA(string a)
{
    A=a;
}
string Invoice::getA()
{
    return A;
}
void Invoice::setB(string b)
{
    B=b;
}
string Invoice::getB()
{
    return B;
}
void Invoice::setC(int c)
{if(c<0)
        C=0;
    else
        C=c;
}
int Invoice::getC()
{
    return C;
}
void Invoice::setD(int d)
{
    if(d<0)
        D=0;
    else
        D=d;
}
int Invoice::getD()
{
    return D;
}
int Invoice::getInvoiceAmount(int c,int d)//成员函数getInvoiceAmount
{
    return c*d;
}
