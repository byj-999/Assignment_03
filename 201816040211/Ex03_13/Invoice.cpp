#include <iostream>
using namespace std;

#include "Invoice.h" // Invoice class definition

Invoice::Invoice(string part1,string describe1,int sale1,int press1)
        : lingjian(part1),
          miaoshu(describe1),
          shouchu(sale1),
          danjia(press1) //初始化四个变量
{

}

void  Invoice::setpart( string lingjian)
{
    lingjian=lingjian;
} // end setpart

string  Invoice::getpart()
{
    return lingjian;
}

void  Invoice::setdescribe( string miaoshu)
{
    miaoshu=miaoshu;
}

string  Invoice::getdescribe()
{
    return miaoshu;
} // end getdescribe

void  Invoice::setsale( int shouchu)
{
    shouchu=shouchu;
}

int Invoice::getsale()
{
    return shouchu;
} // end getsale

void  Invoice::setpress( int danjia)
{
    danjia=danjia;
} // end setpress

int Invoice::getpress()
{
    return danjia;
} // end getpress

int Invoice::InvoiceAmount(int danjia, int shouchu)
{
    if(danjia<0 || shouchu<0)
    return 0;
    else
    return danjia*shouchu;
}// 输出销售总额
