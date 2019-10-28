#include <iostream>
using namespace std;

#include "Date.h" // include definition of class Date
// function main begins program execution
int main()
{
    Date dateTime(00,00,00);//Create one Date objects and assign them to Daate variables.
    dateTime.setdateyear(2019);
    dateTime.setdatemonth(10);
    dateTime.setdateday(27);
    dateTime.displaydate();
    //Output the year,month and day for each Date.
}
