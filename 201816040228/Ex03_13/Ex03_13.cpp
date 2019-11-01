#include <iostream>
#include <string>
using namespace std;

#include "Invoice.h" // include definition of class Invoice

// function main begins program execution
int main()
{
    string nnumber;
    string ddescribe;
   int aamount;
   int pprice;

   Invoice invoice("a","b",1,2);//create a invoice object;
   cout << "零件号: ";
   getline(cin, nnumber);
   cout << "描述：";
   getline(cin, ddescribe);
   cout << "售出量: ";
   cin >>  aamount;
   cout << "单价：";
   cin >> pprice ;


   invoice.setNumber(nnumber);//获取nnumber
   invoice.setDescribe(ddescribe);//获取ddescribe
   invoice.setAmount(aamount);//获取aamount
   invoice.setPrice(pprice);//获取pprice
   cout << "零件号: " << invoice.getNumber() << "   描述："<< invoice.getDescribe() << "   售出量: " << invoice.getAmount() << "   单价：" << invoice.getPrice();
   cout<<"   发票额: "<<invoice.getInvoiceAmount();//输出四个变量和发票额
} // end main
