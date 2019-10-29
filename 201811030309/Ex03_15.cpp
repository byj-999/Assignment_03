#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
    int month, day, year;

    //cin 3 numbers
    cin >> month >> day >> year;

    //initialize the data members
    Date date(month, day, year);

    cout << "the month is" << date.getmonth() << endl;
    cout << "\nthe day is" << date.getday() << endl;
    cout << "\nthe year is" << date.getyear() << endl;

    cout << "\n\nthe time is " ;
    date.displayDate();
}
