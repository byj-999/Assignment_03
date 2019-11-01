#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include "Invoice.h"

int main(int argc, char** argv) {

    //Create an invoice object and write the invoice content
	Invoice invoice("1102","It's a watch.", 89, 1999);

	//Output content in invoice
	cout << " number:\t" << invoice.getNumber() <<"\n description:\t" << invoice.getDescription()
	<< "\n purchased:\t" << invoice.getPurchased() <<"\n price:\t\t" << invoice.getItem() <<endl;
	return 0;
}
