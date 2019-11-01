#include <string>

using namespace std;

//Create an interface for the Invoice class
class Invoice
{
	public:
		Invoice (string,string,int,int);   //this is a constructor
		string getNumber ();
		void setNumber (string);
		string getDescription ();
		void setDescription (string);
		int getPurchased ();
		void setPurchased (int);
		int getItem ();
		void setItem (int);
	private:
		string number;            //This is the part number.
		string description;    //This is the part description.
		int purchased;    //This is the volume of goods sold.
		int item;   //This is the unit price of the goods.
};
