
#include <string>
using namespace std;

class Date
{
    public:
        Date(int,int,int);
        void setyear(int);
        int getyear()const;
        void setmonth(int);
        int getmonth()const;
        void setday(int);
        int getday()const;
    private:
        int year;//定义数据成员 年份
        int month;//定义数据成员 月份
        int day;//定义数据成员 天
};
