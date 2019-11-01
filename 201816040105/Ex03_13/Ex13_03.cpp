#include <iostream>
#include "Invoice.h"
using namespace std;

int main()
{
	Invoice invoice1("x1","y1",1,1);
	Invoice invoice2("x2","y2",2,2);
	cout<<invoice1.getPartNumber()<<" "<<invoice1.getPartDescription()<<" "<<invoice1.getSoldAmount()<<" "<<invoice1.getUnitPrice()<<endl;
	cout<<invoice2.getPartNumber()<<" "<<invoice2.getPartDescription()<<" "<<invoice2.getSoldAmount()<<" "<<invoice2.getUnitPrice()<<endl;
	string a,b;
	int c,d;
	cin>>a>>b>>c>>d;
	invoice1.setPartNumber(a);
	invoice1.setPartDescription(b);
	invoice1.setSoldAmount(c);
	invoice1.setUnitPrice(d);
	cout<<invoice1.getPartNumber()<<" "<<invoice1.getPartDescription()<<" "<<invoice1.getSoldAmount()<<" "<<invoice1.getUnitPrice()<<endl;
}
