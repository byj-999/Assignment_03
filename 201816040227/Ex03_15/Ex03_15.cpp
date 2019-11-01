#include <iostream>
using namespace std;

#include "Date.h" // include definition of class Date
// function main begins program execution
int main()
{
   int year, month, day;
   Date date(0,0,0);/* Create one Date object  */
   cout<<"please enter the Date :"<<endl;
   cin>>year;
   cin>>month;
   cin>>day;
   date.setYear(year);
   date.setMonth(month);
   date.setDay(day);
   date.displayDate();



} // end main
