#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;
#include "Invoice.h"

int main()
{   //create 3 object.
    Invoice invoice1("part number1","part description1",10,2);
    Invoice invoice2("part number2","part description3",-5,10);
    Invoice invoice3("part number3","part description3",7,-1);
    //output invoice1
    cout<<"invoice1: "<<"\n"<<"part number:"<<invoice1.getName()<<"\n"<<"part description: "<<invoice1.getPartname()<<"\n";
    cout<<"Sales volume:"<<invoice1.getVolume()<<"\n"<<"Price:"<<invoice1.getPrice()<<"\n"<<"Invoice Amount is: "
    <<invoice1.getInvoiceAmount()<<"\n\n";
     //output invoice2
    cout<<"invoice2: "<<"\n"<<"part number:"<<invoice2.getName()<<"\n"<<"part description: "<<invoice2.getPartname()<<"\n";
    cout<<"Sales volume:"<<invoice2.getVolume()<<"\n"<<"Price:"<<invoice2.getPrice()<<"\n"<<"Invoice Amount is: "
    <<invoice3.getInvoiceAmount()<<"\n\n";
     //output invoice3
    cout<<"invoice3: "<<"\n"<<"part number:"<<invoice3.getName()<<"\n"<<"part description: "<<invoice3.getPartname()<<"\n";
    cout<<"Sales volume:"<<invoice3.getVolume()<<"\n"<<"Price:"<<invoice3.getPrice()<<"\n"<<"Invoice Amount is: "
      <<invoice3.getInvoiceAmount()<<"\n\n";
}
