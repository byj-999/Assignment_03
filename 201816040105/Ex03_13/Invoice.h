#include <string>
using namespace std;

class Invoice
{
	public:
		Invoice(string ,string ,int ,int );
		void setPartNumber(string);
		string getPartNumber();
		void setPartDescription(string);
		string getPartDescription();
		void setSoldAmount(int);
		int getSoldAmount();
		void setUnitPrice(int);
		int getUnitPrice();
		int getInvoiceAmount();
	private:
		string partNumber;
		string partDescription;
		int soldAmount;
		int unitPrice;
};
