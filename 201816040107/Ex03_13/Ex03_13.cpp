#include <iostream>
#include<iomanip>
#include "Invoice.cpp"
using namespace std;
int main()
{
	Invoice v1("a1","apple",100,5);
	Invoice v2("a2","car",5,30);
	cout<<v1.getnumber()<<setw(6)<<v1.getdes()<<setw(6)<<v1.getamount()<<setw(6)<<v1.getprice()<<endl;
	cout<<"fapiaoe1:"<<v1.getInvoiceAmount(100,5)<<endl;
	cout<<v2.getnumber()<<setw(6)<<v2.getdes()<<setw(6)<<v2.getamount()<<setw(6)<<v2.getprice()<<endl;
	cout<<"fapiaoe2:"<<v2.getInvoiceAmount(5,30)<<endl;
	string a1,a2,a5,a6;
	int a3,a4,a7,a8;
  cout<<"请输入:";
	cin>>a1>>a2>>a3>>a4;//对对象v1中的四个数据成员重新进行赋值； 
	cin>>a5>>a6>>a7>>a8;//对对象v2中的四个数据成员重新进行赋值； 
	v1.setnumber(a1);
	v1.setdes(a2);
	v1.setamount(a3);
	v1.setprice(a4);
	cout<<endl;
	v2.setnumber(a5);
	v2.setdes(a6);
	v2.setamount(a7);
	v2.setprice(a8);
	cout<<v1.getnumber()<<setw(6)<<v1.getdes()<<setw(6)<<v1.getamount()<<setw(6)<<v1.getprice()<<endl;
	cout<<"fapiaoe1:"<<v1.getInvoiceAmount(a3,a4)<<endl;
	cout<<v2.getnumber()<<setw(6)<<v2.getdes()<<setw(6)<<v2.getamount()<<setw(6)<<v2.getprice()<<endl;
	cout<<"fapiaoe2:"<<v2.getInvoiceAmount(a7,a8)<<endl;
	
	
	
	
}
