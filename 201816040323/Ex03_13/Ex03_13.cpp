#include <iostream>

using namespace std;
#include "Invoice.h"

int main()
{
    Invoice a("type_c","cd",100,5);

    cout << a.getPN() << " " << a.getPD()
        << " " << a.getSales() << " " << a.getPrice() << " " << a.getInvoiceAmount() << endl;
    return 0;
}
