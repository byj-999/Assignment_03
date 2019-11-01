#include <iostream>
#include "Date.h"
using namespace std;
int main()
{
	Date w1(2018,12,20);//定义对象w1; 
	w1.displayDate(12);
	int q1,q2,q3;
	cout<<"请输入年月日：";
	cin>>q1>>q2>>q3;
	w1.setyear(q1);
	w1.setmonth(q2);
	w1.setdate(q3);
	w1.displayDate(q2);
}
