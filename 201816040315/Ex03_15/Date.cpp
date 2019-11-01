//Date class member-function
#include <iostream>
using namespace std;

#include "Date.h" //include Date class definition

Date::Date(int Month,int Day,int Year)
{
    setMonth(Month);//initializes Month
    setDay(Day);//initializes Day
    setYear(Year);//initialize Year
}//end Date constructor

//function set month
void Date::setMonth( int month)
{
    if(month>=1&&month<=12)//Determine if the month is legally
        Month = month;
    else
        Month=1;//otherwise,month=1
} //end function setMonth
//function to retrieve month
int Date::getMonth()
{
    return Month;
}//end function get month

//function to set day
void Date::setDay(int day)
{
    Day = day;
}//end function setDay
//function to retrieve day
int Date::getDay()
{
    return Day;
}//end function get day

//function to set year
void Date::setYear(int year)
{
    Year = year;
}//end function to set year
//function to retrieve year
int Date::getYear()
{
    return Year;
}//end function get year

//function to display date
void Date::displayDate()
{
    cout<<"Date is:"<<getMonth()<<"/"<<getDay()<<"/"<<getYear()<<endl;
}//end function display date
