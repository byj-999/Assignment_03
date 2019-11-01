#include <iostream>
#include<string>
#include "Date.h"
using namespace std;

int main()
{
    int number;//accept the data
    Date date01(2019,10,20);//Initialize the object
    date01.displayDate();//display the date

    cout<<endl<<"Please enter the day:";
    cin>>number;
    date01.setDay(number);//accept the day

    cout<<"Please enter the month:";//accept the month
    cin>>number;
    date01.setMonth(number);

    cout<<"Please enter the year:";//accept the year
    cin>>number;
    date01.setYear(number);

    cout<<endl;
    date01.displayDate();//display the date again
    return 0;
}
