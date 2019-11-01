#include <iostream>

using namespace std;
#include "Date.h"

int main()
{
    Date date(2019,10,31);//初始化日期为2019年10月31号

    cout << date.getyear() << " " << date.getmonth() << " " << date.getday()<< endl;//输出日期
    return 0;
}
