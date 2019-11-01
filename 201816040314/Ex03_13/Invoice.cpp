#include "Invoice.h"
Invoice::Invoice(string id,string discription,int sale,int price)//the constructor with three parameter
{
    setPartDis(discription);
    setPartId(id);
    setAllSale(sale);
    setSinglePrice(price);
}
void Invoice::setPartDis(string discription)// the function is to set the part description
{
    partDis=discription;
}
void Invoice::setPartId(string id)// the function is to set the part id
{
    partId=id;
}
void Invoice::setSinglePrice(int price)// the function is to set the single price
{
    if(price>0)
    {
       singlePrice=price;
    }
    else
        singlePrice=0;

}
void Invoice::setAllSale(int sale)// the function is to set the sale number
{
    if(sale>0)
    {
       allSale=sale;
    }
    else
        allSale=0;

}
void Invoice::display()// the function is to display the content
{
    cout<<"Part's ID:"<<getPartId()<<endl
    <<"Part's Description:"<<getPartDis()<<endl
    <<"Sale Number:"<<getAllSale()<<endl
    <<"Price:"<<getSinglePrice()<<endl;
    cout<<"Invoice Value:"<<getInvoiceAmount()<<endl<<endl;
}
string Invoice::getPartDis()// the function is to set the part description
{
    return partDis;
}
string Invoice::getPartId()// the function is to get the part id
{
    return partId;
}
int Invoice::getAllSale()// the function is to get the sale number
{
    return allSale;
}
int Invoice::getSinglePrice()// the function is to get the single price
{
    return singlePrice;
}
int Invoice::getInvoiceAmount()// the function is to get the invoice amount
{
    return getAllSale()*getSinglePrice();
}
