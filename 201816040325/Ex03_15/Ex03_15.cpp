#include <iostream>
using namespace std;

#include"Date.h"

int main()
{
    cout<<"month"<<"/"<<"day"<<"/"<<"year";
    cout<<endl;
    Date date(11,11,2018);//初始化对象date的值

    date.displayDate();//打印年月日

    return 0;
}
