#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    Date date1(10,10,2000);
    Date date2(7,10,2000);
    date1.displayDate();
    cout<<endl;
    date2.displayDate();
    cout<<endl;
    return 0;
}
