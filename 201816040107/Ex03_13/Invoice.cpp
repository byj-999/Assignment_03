#include <iostream>
#include<string>
#include "Invoice.h"
using namespace std;
Invoice::Invoice(string n1,string n2,int n3,int n4)
	:number(n1),des(n2),amount(n3),price(n4)
{
	
}
void Invoice::setnumber(string n1)
{
	number=n1;
}
string Invoice::getnumber()
{
	return number;
}
void Invoice::setdes(string n2)
{
	des=n2;
}
string Invoice::getdes()
{
	return des;
}
void Invoice::setamount(int n3)
{
	amount=n3;
}
int Invoice::getamount()
{
	return amount;
}
void Invoice::setprice(int n4)
{
	price=n4;
}
int Invoice::getprice()
{
	return price;
}
int Invoice::getInvoiceAmount(int n3,int n4)//getInvoiceAmount函数的定义； 
{
	int a;
	if(n3<0 || n4<0)
		return 0;
	else
	{
		a=n3*n4;
		return a;
	}
}
