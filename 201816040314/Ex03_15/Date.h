#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED
#include <iostream>
class Date//declare a class Date
{
public:
    Date(int year,int month,int day);//constructor with three parameter
    void setYear(int);// the function is to set the year's value
    void setDay(int);// the function is to set the day's value
    void setMonth(int);// the function is to set the month's value
    void displayDate();// the function is to display the date
    int getDay();// the function is to get the day's value
    int getYear();// the function is to get the year's value
    int getMonth();// the function is to get the month's value
private:
    int year;//to store the year's value
    int day;//to store the day's value
    int month;//to store the month's value
};


#endif // DATE_H_INCLUDED
