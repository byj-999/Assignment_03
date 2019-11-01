//驱动文件
#include <iostream>
using namespace std;
#include"Invoice.h"

int main()
{
    Invoice store("c++","c",40,100);
    cout<<store.gettype()<<endl;//output the type
    cout<<store.getdescribe()<<endl;//out the describe
    cout<<store.getnumber()<<endl;//out the number
    cout<<store.getprice()<<endl;//output the price
    cout<<store.getInvoiceamount();
}
