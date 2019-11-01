#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
	Date date1(11,11,11);
	Date date2(04,24,99);
	Date date3(99,01,99);
	
	date1.displayDate();
	date2.displayDate();
	date3.displayDate();
	
	int x,y,z;
	cin>>x>>y>>z;
	date1.setMonth(x);
	date1.setDay(y);
	date1.setYear(z);
	date1.displayDate();
	return 0; 
}
