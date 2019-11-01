#include <iostream>
using namespace std;

#include "Date.h" // include definition of class Date


int main()
{
    cout<<"年份 "<<"月份 "<<"日 "<<endl;
    int y,m,d;
    Date Dat(1 , 2, 3); //定义一个dat对象并初始化
    cin>>y>>m>>d;
    Dat.setyear(y);
    Dat.setmonth(m);
    Dat.setday(d);
    Dat.displaydate(); //输出年月日
}
