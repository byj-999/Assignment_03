// homework2: Date.cpp
// Member-function definitions for class Date.
#include <iostream>
using namespace std;

#include "Date.h" // include definition of Date Account

Date::Date( int year,int month,int day )
   :Year(year),Month(month),Day(day)//in class Date ,define a Date object
{

}

void Date::setYear( int year )
{
    Year=year;
}
int Date::getYear()const
{
    return Year;
}
void Date::setMonth( int month )
{
    if(month<=12&&month>=1)
        Month=month;
    else
        Month=1;
}
int Date::getMonth()const
{
    return Month;
}
void Date::setDay( int day )
{
    Day=day;
}
int Date::getDay()const
{
    return Day;
}//determine and assign values to the data
void Date::displayDate()
{
    cout<<"The current date is "<<getYear()<<"/"<<getMonth()<<"/"<<getDay()<<endl;
}//output date is correct form
