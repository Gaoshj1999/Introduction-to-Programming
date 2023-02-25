//单目运算符
#include <iostream>
using namespace std;
class clock
{
private:
    int hour, minute, second;

public:
    clock(int hour = 0, int minute = 0, int second = 0);
    void showtime() const;
    clock &operator++(); //前置对象返回的是一个引用，是左值
    clock operator++(int);
};
clock::clock(int hour, int minute, int second)
{
    if (0 <= hour && hour < 24 && 0 <= minute && minute < 60 && 0 <= second && second < 60)
    {
        this->hour = hour; //this就是指向所有成员变量的指针
        this->minute = minute;
        this->second = second;
    }
    else
    {
        cout << "time error" << endl;
    }
}
void clock::showtime() const
{
    cout << hour << ":" << minute << ":" << second << endl;
}
clock &clock::operator++()
{
    second++;
    if (second >= 60)
    {
        second -= 60;
        minute++;
        if (minute >= 60)
        {
            minute -= 60;
            hour = (hour + 1) % 24;
        }
    }
    return *this; //前置是先增加一在使用，使用的就是返回的那个值，当然得返回他自己，所以是引用
}
clock clock::operator++(int)
{
    clock old = *this; //先使用，后加一，其实是同时发生的，使用的其实是没加一的副本，本身已经加一了，这个例子就很好的解释了
    ++(*this);         //让后置运算直接调用前置运算的这个函数
    return old;
}
int main()
{
    clock myclock(23, 59, 59);
    cout << "first time output:";
    myclock.showtime();
    cout << "show myclock++:" << endl;
    (myclock++).showtime();//前面那个函数返回的是暂时的无名对象，是为增加前的副本的无名对象
    cout << "show ++myclock:" << endl;
    (++myclock).showtime();//前面那个函数返回的是对象自身，因为返回的是引用
    return 0;
}
