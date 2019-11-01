#include <string>
using namespace std;
class Date
{
	public:
		Date(int, int,int);//声明构造函数； 
		void setyear(int);
		int  getyear();
		void setmonth(int);
		int  getmonth();
		void setdate(int);
		int  getdate();
		void displayDate(int);
	private:
		int date;//日； 
		int month;//月； 
		int year;//年； 
};
