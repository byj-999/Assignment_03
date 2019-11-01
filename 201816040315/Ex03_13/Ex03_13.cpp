
#include <iostream>
using namespace std;

#include "Invoice.h" //include definition of class Invoice

int main()
{
    Invoice invoice1("1031","nova2s",100,200);//initializes data
    cout<<"Component's id: "<<invoice1.getId()<<endl<<"Component's description: "<<invoice1.getDescription()<<endl
        <<"Component's amount:"<<invoice1.getAmount()<<endl<<"Component's price:"<<invoice1.getPrice()<<endl
        <<"Profit:"<<invoice1.getInvoiceAmount()<<endl;
    return 0;
}
