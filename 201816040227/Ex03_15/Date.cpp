#include <iostream>
using namespace std;

#include "Date.h" // Date class definition
Date::Date( int y,int m , int d)// Define the constructor.
{
    setYear(y);
    setMonth(m);
    setDay(d);
}
void Date::setYear( int y)
{
    year = y;
} /* Define a set function for the year data member. */
int Date::getYear()
{
   return year;
} /* Define a get function for the year data member. */

void Date::setMonth( int m )
{
    if(m>=1&&m<=12)
        month = m;
    else
        month=1;
} /* Define a set function for the month data member. */
int Date::getMonth()
{
   return month;
} /* Define a get function for the month data member. */

void Date::setDay( int d )
{
    day = d;
} /* Define a set function for the day data member. */

int Date::getDay()
{
    return day;
}/* Define a get function for the day data member. */

void Date::displayDate()
{
    cout<<getYear()<<"/"<<getMonth()<<"/"<<getDay()<<endl;
}
