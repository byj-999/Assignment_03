// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
//#include
using namespace std;

#include "Date.h" // include definition of class Employee

// function main begins program execution
int main()
{

    int a,x,y;
    cout<<"ÇëÊäÈëÏà¹ØÁ¿\n";
    cin>>a;
    cin>>x;
    cin>>y;
    Date Date1(a,x,y);

    //cout<<Date1.displayDate(a,x,y);
    int sales,price;
    cout<<Date1.getDatemonth()<<"/"<<Date1.getDateday()<<"/"<<Date1.getDateyear();
}






