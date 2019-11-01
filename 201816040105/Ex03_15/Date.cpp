#include <iostream>
#include "Date.h"
using namespace std;

Date::Date(int theMonth,int theDay,int theYear)
{
	setMonth(theMonth);
	setDay(theDay);
	setYear(theYear);
}
void Date::setMonth(int theMonth)
{
	if (theMonth>=1&&theMonth<=12)
	month=theMonth;
	else
	month=1;
}
void Date::setDay(int theDay)
{
	day=theDay;
}
void Date::setYear(int theYear)
{
	year=theYear;
}
int Date::getMonth()
{
	return month;
}
int Date::getDay()
{
	return day;
}
int Date::getYear()
{
	return year;
}
int Date::displayDate()
{
	cout<<getMonth()<<"/"<<getDay()<<"/"<<getYear()<<endl; 
}
