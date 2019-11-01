#include <string>
using namespace std;


class Date
{
public:
    Date(int ,int ,int );//初始化年月日
    void setDateYear(int );//设置年
    int getDateYear();//读取年
    void setDateMonth(int );//设置月
    int getDateMonth();//读取月
    void setDateDay(int );//设置日
    int getDateDay();//读取日
    void displayDate();//打印年月日
private:
    int dateYear;//年
    int dateMonth;//月
    int dateDay;//日
};
