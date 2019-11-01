using namespace std;

class Date
{
private:
    int Month;//月
    int Day;//日
    int Year;//年
public:
    Date(int, int, int);//构造函数声明。
    void setMonth(int);//设置月份。
    int getMonth();//获取月份。
    void setDay(int);//设置天。
    int getDay();//获取天。
    void setYear(int);//设置年份。
    int getYear();//获取年份。
    void displayDate();//显示日期。
};
