#include <iostream>
using namespace std;
#include"Date.h"// Date class definition
// constructor initializes year,month and day
Date::Date(int year,int month,int date)
{
    setYear(year);
    setMonth(month);
    setDay(date);
}
// function to set the year
void Date::setYear(int year)
{
    Year=year;
}
// function to retrieve the year
int Date::getYear()
{
    return Year;
}
// function to set the month
void Date::setMonth(int month)
{
    if(month<=12&&month>=1)
        Month=month;
    else
        Month=1;
}
// function to retrieve the month
int Date::getMonth()
{
    return Month;
}
// function to set the day
void Date::setDay(int date)
{
    Day=date;
}
// function to retrieve the day
int Date::getDay()
{
    return Day;
}
//function to display the message
void Date::displayDate()
{
    cout<<getMonth()<<"/"<<getDay()<<"/"<<getYear()<<endl;
}
