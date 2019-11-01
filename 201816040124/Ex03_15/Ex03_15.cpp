#include <iostream>
#include"Date.h"// Date class definition
using namespace std;

int main()
{
    //Create two Date objects
    Date date1(2019,5,3);
    Date date2(2019,16,15);
    //display message
    cout<<"当日期为2019.5.3时"<<endl;
    date1.displayDate();
    cout<<"当日期为2019.16.15时"<<endl;
    date2.displayDate();
    return 0;
}//end main
