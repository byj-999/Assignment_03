#include <iostream>
#include "Invoice.h"

using namespace std;

int main()
{

    //define 2 string members and 2 int members
    string id, name;
    int price, amount;

    //cin 4 members
    cin >> id >> name >> price >> amount;

    //initizlize the data member
    Invoice goods(id, name, price, amount);

    cout << "the goods id is " << goods.getid() <<endl;
    cout << "\nthe goods name is " << goods.getname() << endl;
    cout << "\nthe goods price is " << goods.getprice() << endl;
    cout << "\nthe goods amount is " << goods.getamount() << endl;

    cout << "\n\nthe goods of total price is " << goods.displayMessage() << endl;
    return 0;
}
