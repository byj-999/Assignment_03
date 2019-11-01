#include <iostream>
using namespace std;
#include "Invoice.h"
Invoice::Invoice(string id,string description,int sales,int price)
{
    setInvoiceId(id);
    setInvoiceDescription(description);
    setInvoiceSales(sales);
    setInvoicePrince(price);            
}
void Invoice::setInvoiceId(string Id)
 {
     InvoiceId=Id;             
 }
string Invoice::getInvoiceId()
 {
     return InvoiceId;        
 }
void Invoice::setInvoiceDescription(string Description)
{
      InvoiceDescription=Description;     
}
string Invoice::getInvoiceDescription()
{
      return InvoiceDescription;    
}
void Invoice::setInvoiceSales(int Sales)
{
    InvoiceSales=Sales;             
}
int Invoice::getInvoiceSales()
{
    return InvoiceSales;         
}
void Invoice::setInvoicePrince(int Price)
{
    InvoicePrince=Price;        
}
int Invoice::getInvoicePrince()
{
    return InvoicePrince;        
}
int Invoice::getInvoiceAmount()
{
    if(InvoiceSales<0)      
    {
        InvoiceSales=0;
    }
    if(InvoicePrince<0)
    {
        InvoicePrince=0; 
    }
    return InvoicePrince*InvoiceSales;    
}
void Invoice::displayMessage()    
{
    cout<<"零件号: "<<getInvoiceId()<<endl;
    cout<<"零件描述: "<<getInvoiceDescription()<<endl;
    cout<<"商品售出量: "<<getInvoiceSales()<<endl;
    cout<<"商品单价: "<<getInvoicePrince()<<endl;
    cout<<"发票额: "<<getInvoiceAmount()<<endl;
}
