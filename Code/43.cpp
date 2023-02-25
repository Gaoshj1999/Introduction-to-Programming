#include <iostream>
using namespace std;
class clock
{
public:
    void settime(int newh = 0, int newm = 0, int news = 0); //这里是类的函数，因此实参hour，minute，second在函数内也是有定义的，所以可以对其值进行修改,而正常函数是无法读入全局变量的，所以这个类中的变量相当于函数内定义的局部变量，但是在整个类中均有效
    void showtime();                                        //这里的函数是公有的因此可以从外部设置
private:
    int hour, minute, second; //这里的变量是私有的，因此不能够够从外部设置
};
void clock::settime(int newh, int newm, int news)
{
    hour = newh;
    minute = newm;
    second = news;
}
void clock::showtime()
{
    cout << hour << ':' << minute << ':' << second;
}
int main()
{
    clock myclock;
    myclock.settime(8, 30, 30);
    myclock.showtime();
    return 0;
}
