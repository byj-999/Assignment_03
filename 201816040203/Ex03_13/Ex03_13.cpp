#include<iostream>
#include<string>
#include<iomanip>
#include"Invoice.h"
using namespace std;

int main()
{
    Invoice Invoice1("C1","D1",10,5);
    Invoice Invoice2("C2","D2",-15,21);
    cout<<Invoice1.getA()<<setw(20)<<Invoice1.getB()<<setw(20)<<Invoice1.getC()<<setw(20)<<Invoice1.getD()<<setw(20)<<Invoice1.getC()*Invoice1.getD()<<endl;
    cout<<Invoice2.getA()<<setw(20)<<Invoice2.getB()<<setw(20)<<Invoice2.getC()<<setw(20)<<Invoice2.getD()<<setw(20)<<Invoice2.getC()*Invoice2.getD()<<endl;
    cout<<endl;
}
