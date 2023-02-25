#include <iostream>
using namespace std;
class clock
{
public:
    clock(int newh, int newm, int news_);
    clock();
    clock(const clock &clock1);                 //这里是自定义的复制构造函数，如果不定义系统也会有默认赋值构造函数，就是把值一一对应过去
    void settime(int newh, int newm, int news); //这里自定义的赋值构造函数可以看到他的类姓名是类名，形参为本类的对象引用，因为引用可以双向改数据，但是我们不希望外面能改，所以加了const
    void showtime();
    clock(const clock &c)=delete;//指示编译器不生成默认赋值构造函数

private:
    int hour, minute, second;
};
clock::clock(const clock &clock1) {}
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
clock::clock(int newh, int newm, int news) : hour(newh), minute(newm), second(news) {}
clock::clock() : clock(0, 0, 0) {}
int main()
{
    clock c(8, 10, 0);
    clock c2;
    c.showtime();
    c2.showtime();
    return 0;
}