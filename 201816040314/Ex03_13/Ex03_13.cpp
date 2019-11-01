#include <iostream>
#include <string>
#include "Invoice.h"
using namespace std;
int main()
{
    int num=0;
    string name;
    Invoice Invoice01("001","This is Junk food",98,10);//to initialize the object
    Invoice01.display();//display the content

    cout<<"Please enter the Merchandise's ID:";
    getline(cin,name);
    Invoice01.setPartId(name);//to accept the Merchandise's ID

    cout<<"Please enter the Merchandise's description:";
    getline(cin,name);
    Invoice01.setPartDis(name);//to accept the Merchandise's description

    cout<<"Please enter the sale number:";
    cin>>num;
    Invoice01.setAllSale(num);//to accept the sale number

    cout<<"Please enter the price:";
    cin>>num;
    Invoice01.setSinglePrice(num);//to accept the single price
    cout<<endl;

    Invoice01.display();//display the content
    return 0;
}
