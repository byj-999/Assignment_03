#include <iostream>
#include "Date.h"

using namespace std;

//create a function receiving 3 references;
Date::Date(int cmonth, int cday, int cyear)
    : month(cmonth), day(cday), year(cyear)
    {

    }

//set month, day, year to initialize 3 dates;
void Date::setmonth(int cmonth)
{
    month=cmonth;
}
void Date::setday(int cday)
{
    day=cday;
}
void Date::setyear(int cyear)
{
    year=cyear;
}

//return 3 dates and judge the date is true or fault;
int Date::getmonth() const
{
    if(month>12||month<1)
    return 1;
    else
        return month;
}
int Date::getday() const
{
    return day;
}
int Date::getyear() const
{
    return year;
}

// cout all the dates and using the "/"
void Date::displayDate()
{
    cout << getmonth() << "/" << getday() << "/" << getyear() <<endl;
}
