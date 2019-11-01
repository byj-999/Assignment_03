#include <iostream>
using namespace std;
#include "Invoice.h"
int main()
{
    Invoice invoice("ljh","ljms",5,6);
    invoice.displayMessage();
    cout<<endl<<endl;
    string ljh,ljms;
    int scl,dj;
    cout<<"输入新的零件号: ";
    getline(cin,ljh); 
    invoice.setInvoiceId(ljh);
    cout<<"输入新的零件描述: ";
    getline(cin,ljms);
    invoice.setInvoiceDescription(ljms);
    cout<<"输入新的商品售出量 :";
    cin>>scl;
    invoice.setInvoiceSales(scl);
    cout<<"输入新的商品单价: ";
    cin>>dj;
    invoice.setInvoicePrince(dj);
     cout<<endl<<endl;
    invoice.displayMessage();
}
