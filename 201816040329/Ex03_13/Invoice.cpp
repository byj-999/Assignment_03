#include<iostream>
#include<string>
using namespace std;

#include"Invoice.h"

Invoice::Invoice(string PID,string PDIS,int Salenum,int Saleprice)
{
    setPID(PID);
    setPDIS(PDIS);
    intSalenum(Salenum);
    int Saleprice(Saleprice);
}
void Invoice::setPID(string id)
{
    PID=id;
}
string Invoice::getPID()
{
    return PID;
}
void Invoice::setPDIS(string discrip)
{
    PDIS=discrip;
}
string Invoice::getPDIS()
{
    return PIDS;
}
void Invoice::setSalenum(int number)
{
      if(number>=0)
      {
          Salenum=number;
      }
      else
      {
          Salenum=0;
      }
}
int Invoice::getSalenum()
{
    return Salenum;
}
void Invoice::setSaleprice(int price)
{
    if(price>0&&price=0)
    {
        Saleprice=price;
    }
    else
    {
        Saleprice=0;
    }
}
int Invoice::getSaleprice()
{
    return Saleprice;
}
int Invoice::getInvoiceAmount(int number,int price,int n)
{
    n=number*price;
    return n;
}
void Invoice::displayInvoice
{
    cout<<"入零件号："<<getPID()<<endl;
    cout<<"零件描述："<<getPDIS()<<endl;
    cout<<"商品售出量："<<getSalenum()<<endl;
    cout<<"商品单价："<<getSaleprice()<<endl;
    cout<<"发票额："<<getInvoiceAmount(getSalenum(),getSaleprice())<<endl;

}
