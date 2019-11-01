#include <iostream>
#include <string>
using namespace std;
#include "Date.h"
int main()
{
    //create 3 Date project
    Date date1(5,10,2018);
    Date date2(-1,5,2019);
    Date date3(13,7,2000);
    //output 3 Date project
    date1.displayDate();
    date2.displayDate();
    date3.displayDate();
    return 0;
}
