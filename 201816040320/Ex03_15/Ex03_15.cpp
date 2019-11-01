#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
    int z;
    Date date(8,18,2000);
    cout<< "显示日期"<<endl;
    date.displayDate();
    //显示日期
    cout <<"\n修改日期为当前日期"<<endl;
    cout << "月：";
    cin >>z;
    date.setMonth(z);
    cout << "日：";
    cin >>z;
    date.setDay(z);
    cout << "年：";
    cin >>z;
    date.setYear(z);
    //修改日期
    cout<< "\n\n显示日期"<<endl;
    date.displayDate();
    //再次显示日期

}
