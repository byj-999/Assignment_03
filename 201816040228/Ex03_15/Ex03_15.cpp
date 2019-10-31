
#include <iostream>
#include <string>
using namespace std;

#include "Date.h" // include definition of class Date

// function main begins program execution
int main()
{
   int mmonth;
   int dday;
   int yyear;

   Date date(1,1,2);
   cout << "Month: ";
   cin >> mmonth;
   cout << "Day：";
   cin >> dday;
   cout << "Year: ";
   cin >>  yyear;

   date.setMonth(mmonth);////调用更改月
   date.setDay(dday);//调用更改天
   date.setYear(yyear);//调用更改年

   date.displayDate();//调用displayDate函数输出
} // end main
