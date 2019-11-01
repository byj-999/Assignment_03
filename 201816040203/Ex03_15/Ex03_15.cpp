#include<iostream>
#include<string>
#include<iomanip>
#include"Date.h"
using namespace std;


int main()
{
    Date date1(9,26,2018);
    Date date2(6,10,2001);
    cout<<date1.displayDate()<<endl;
    cout<<date2.displayDate()<<endl;
    cout<<endl;
}
