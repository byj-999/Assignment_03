#include <iostream>
#include<string>
#include"Date.h"
using namespace std;

int main()
{
    Date date1(12,25,2019);
    Date date2(12,24,2019);
    date1.displayDate();
    date2.displayDate();
    return 0;
}
