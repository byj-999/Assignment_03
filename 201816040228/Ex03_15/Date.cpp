#include <iostream>
#include <string>
using namespace std;

#include "Date.h" // Date class definition
// constructor initializes month day  and year
// with strings supplied as arguments
Date::Date( int month, int day, int year )
{
   setMonth( month );// initializes month
   setDay( day );// initializes day
   setYear( year );// initializes year
}


void Date::setMonth( int month )()// function to set the month
{
    Month=month;
}
int Date::getMonth()()// function to get the month
{
   return Month;
}


void Date::setDay( int day )()// function to set the day
{
    Day=day;
}
int Date::getDay()()// function to get the day
{
    return Day;
}



void Date::setYear( int year)()// function to set the year
{
    Year=year;
}
int Date::getYear()()// function to get the year
{
   return Year;
}



void Date::displayDate()//ÅÐ¶ÏÇÒÊä³öº¯Êý
{
    if(Month < 0||Month > 12)
    {
        Month=1;
    }

    cout << getMonth() << " / " << getDay() << " / " << getYear() <<  endl;
}





