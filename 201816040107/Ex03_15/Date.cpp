#include <iostream>
#include <string>
#include "Date.h"
using namespace std;
Date::Date(int n1,int n2,int n3)
	:year(n1),month(n2),date(n3)//初始化； 
{
	
}
void Date::setyear(int a1)
{
	year=a1;
}
int Date::getyear()
{
	return year;
}
void Date::setmonth(int a2)
{
	month=a2;
}
int Date::getmonth()
{
	return month;
}
void Date::setdate(int a3)
{
	date=a3;
}
int Date::getdate()
{
	return date;
}
void Date::displayDate(int a2)//displayDate函数的定义； 
{
	if(a2<=12 && a2>=1)
	{
		cout<<getyear()<<"/"<<getmonth()<<"/"<<getdate()<<endl;
	}
	else
	cout<<getyear()<<"/"<<1<<"/"<<getdate()<<endl;
}
