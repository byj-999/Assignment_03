#include"Invoice.h"
using namespace std;
#include<iostream>
int main()
{
    int math,money;
    string n,e;

    Invoice bill("2001","Hot Tea",7,8);//initialize data member with arguments

    //display initialized data member
    cout<<"Number:"<<bill.getnumber()<<endl<<"Explain:"<<bill.getexplain()<<endl<<"Much:"<<bill.getmuch()<<endl<<"Money:"<<bill.getmoney()<<endl;
    cout<<"Amount:"<<bill.getInvoiceAmount();
    cout<<endl;

   //change number with another argument
    getline(cin,n);
    bill.setnumber(n);
    bill.getnumber();

   //change explain with another string
    getline(cin,e);
    bill.setexplain(e);
    bill.getexplain();

   //change much with another arguments
    cin>>math;
    //cin>>'\n';
     bill.setmuch(math);
    bill.getmuch();


    //change money with another arguments
    cin>>money;
    //cin>>'\n';
    bill.setmoney(money);
    bill.getmoney();

   //display initialized data member again
    cout<<"Number:"<<bill.getnumber()<<endl<<"Explain:"<<bill.getexplain()<<endl<<"Much:"<<bill.getmuch()<<endl<<"Money:"<<bill.getmoney()<<endl;
    cout<<"Amount:"<<bill.getInvoiceAmount();

}//end main
