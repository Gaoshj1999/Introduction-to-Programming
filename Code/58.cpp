#include <iostream>
using namespace std;
enum num
{
    type1 = 1,
    type2,
    type3,
    type4,
    type5,
    type6
};
class dat
{
private:
    num number;
    char sex;
    int id;

public:
    dat(num n, char s, int i)
    {
        number = n;
        sex = s;
        id = i;
        cout << "构造了一个data" << endl;
    }
    ~dat()
    {
        cout << "析构了一个data" << endl;
    }
    num getnumber() const
    {
        return number;
    }
    char getsex() const
    {
        return sex;
    }
    int getid() const
    {
        return id;
    }
    void setnumber(num n)
    {
        number = n;
    }
    void setsex(char s)
    {
        sex = s;
    }
    void setid(int i)
    {
        id = i;
    }
    void run()
    {
        cout << "data开始运行" << endl;
    }
    void stop()
    {
        cout << "data停止运行" << endl;
    }
};
class daytime
{
private:
    int hour;
    int minute;
    int second;

public:
    daytime(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
        cout << "设置了一天的时间" << endl;
    }
    ~daytime()
    {
        cout << "删除了一天的时间" << endl;
    }
    void sethour(int h)
    {
        hour = h;
    }
    void setminute(int m)
    {
        minute = m;
    }
    void setsecond(int s)
    {
        second = s;
    }
    int gethour() const
    {
        return hour;
    }
    int getminute() const
    {
        return minute;
    }
    int getsecond() const
    {
        return second;
    }
    void run()
    {
        cout << "时间开始" << endl;
    }
    void stop()
    {
        cout << "时间停止" << endl;
    }
};
class birthday
{
private:
    int year;
    int month;
    int day;
    daytime mybirthday;

public:
    birthday(int y, int m, int d, daytime myb);
    ~birthday()
    {
        cout << "取消我的生日" << endl;
    }
    void setyear(int y)
    {
        year = y;
    }
    void setmonth(int m)
    {
        month = m;
    }
    void setday(int d)
    {
        day = d;
    }
    void setmybirthday(daytime myb)
    {
        mybirthday = myb;
    }
    int getyear() const
    {
        return year;
    }
    int getmonth() const
    {
        return month;
    }
    int getday() const
    {
        return day;
    }
    daytime getmybirthday() const
    {
        return mybirthday;
    }
    void run()
    {
        cout << "我的生日开始调整" << endl;
    }
    void stop()
    {
        cout << "我的生日停止调整" << endl;
    }
};
birthday::birthday(int y, int m, int d, daytime myb) : year(y), month(m), day(d), mybirthday(myb)
{
    cout << "创建我的生日" << endl;
}
class people
{
private:
    dat data1;
    birthday birthday1;

public:
    people(dat d, birthday b);
    ~people() {}
    void run()
    {
        cout << "yes" << endl;
    }
};
people::people(dat d, birthday b) : data1(d), birthday1(b) {}

int main()
{
    dat dat1(type1,'M',2018533197);
}
//三个经验
//第一个，别使用data当类名，有问题
//第二个包含类的类的构造函数要在函数体外声明
//切记自定义了默认构造函数之后如果不再声明默认构造函数，则在主程序定义类变量时要赋值
