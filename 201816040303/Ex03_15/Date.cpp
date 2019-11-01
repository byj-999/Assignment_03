#include<iostream>

//It's a head file.
#include"Date.h"
using namespace std;

//This is a constructor with three variables of the int type
Date::Date(int m,int d,int y)
{
    setMonth(m);
    setDay(d);
    setYear(y);
}

//Set function write month value
void Date::setMonth(int m)
{
    month = m;
}

//Get function returns month value
int Date::getMonth()
{
    return month;
}

//Set function write day value
void Date::setDay(int d)
{
    day = d;
}

//Get function returns day value
int Date::getDay()
{
    return day;
}

//Set function write year value
void Date::setYear(int y)
{
    year = y;
}

//Get function returns year value
int Date::getYear()
{
    return year;
}

//Implementing the display function
void Date::displayDate()
{
    cout << getMonth() <<"/" <<getDay() <<"/" <<getYear()<<endl;
}
