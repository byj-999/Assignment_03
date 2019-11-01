// homework1:Date.cpp
// Create and manipulate Date objects.
#include <iostream>
using namespace std;

// include definition of class Date from Date.h
#include "Date.h"

// function main begins program execution
int main()
{
    int year,month,day;
    cout<<"year of entry: ";
    cin>>year;
    cout<<"month of entry: ";
    cin>>month;
    cout<<"day of entry: ";
    cin>>day;//input relevant data
    Date myDate(year,month,day);
    myDate.setYear(year);
    myDate.setMonth(month);
    myDate.setDay(day);//set relevant data
    myDate.displayDate();
} // end main
