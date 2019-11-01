#include <iostream>

using namespace std;



#include "Invoice.h" // include definition of class Employee





int main()

{

    string a, b;

    int c,d;



    cout<<"零件号"<<" "<<"零件描述"<<" "<<"售出量"<<" "<<"单价"<<endl;



    getline(cin,a); //读进零件号

    getline(cin,b); //读进零件描述

    cin>>c;

    cin>>d;



    Invoice Lei(a,b,c,d);



    Lei.setpart(a);

    Lei.setdescribe( b);

    Lei.setsale( c);

    Lei.setpress( d);

    cout<<"零件号"<<" "<<"零件描述"<<" "<<"售出量"<<" "<<"单价"<<" "<<"发票额"<<endl;

    cout<<Lei.getpart()<<" "<<Lei.getdescribe()<<" "<<Lei.getsale()<<" "<<Lei.getpress()<<" "<<Lei.InvoiceAmount(c,d)<<endl;//函数的输出

    return 0;

    }
