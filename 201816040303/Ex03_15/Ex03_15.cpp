#include <iostream>

//It's a head file.
#include"Date.h"
using namespace std;

int main()
{
    //Create a Date class
    Date date(11,2,2019);
    //Perform the display function to print out the date
    date.displayDate();
    return 0;
}
