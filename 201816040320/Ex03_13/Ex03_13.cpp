#include <iostream>
using namespace std;
#include <string>
#include "Invoice.h"

int main()
{
    string name;
    int n;
    Invoice invoice("52134","nova 5i pro",3,2500);
    cout <<"显示商品信息"<<endl;
    cout <<"零件号："<<invoice.getPN()<<"\n"<<endl;
    cout <<"零件描述："<<invoice.getPartDescription()<<"\n"<<endl;
    cout <<"商品出售量："<<invoice.getSaleAmount()<<"\n"<<endl;
    cout <<"商品单价："<<invoice.getPrice()<<"\n"<<endl;
    cout <<"计算发票额："<<invoice.getInvoiceAmount()<<"\n"<<endl;
    //打印目前商品信息。
    cout <<"修改发票信息"<<endl;
    cout <<"零件号：";
    cin >>name;
    invoice.setPN(name);
    cout <<"零件描述：";
    cin >>name;
    invoice.setPartDescription(name);
    cout <<"商品售出量：";
    cin >>n;
    invoice.setSaleAmount(n);
    cout <<"商品单价：";
    cin >>n;
    invoice.setPrice(n);
    //修改商品信息。
    cout <<"\n\n显示商品信息"<<endl;
    cout <<"零件号："<<invoice.getPN()<<"\n"<<endl;
    cout <<"零件描述："<<invoice.getPartDescription()<<"\n"<<endl;
    cout <<"商品出售量："<<invoice.getSaleAmount()<<"\n"<<endl;
    cout <<"商品单价："<<invoice.getPrice()<<"\n"<<endl;
    cout <<"计算发票额："<<invoice.getInvoiceAmount()<<"\n"<<endl;
    //再次打印修改后的商品信息。

}
