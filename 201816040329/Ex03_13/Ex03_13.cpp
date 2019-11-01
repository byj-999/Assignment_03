#include <iostream>
#include <string>
using namespace std;
#include "Invoice.h"

int main()
{
 Invoice invoice
  ("201816040329","hello",225,999);
 invoice.displayInvoice();
 cout << "\n" <<endl;
}
