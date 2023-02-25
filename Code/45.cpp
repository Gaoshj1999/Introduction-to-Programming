#include <iostream>
using namespace std;
class clock
{
public:
    clock(int newh, int newm, int news);
    clock(); //这里要补构造函数是因为一旦自己定了构造函数，那么系统就不会再给出构造函数，那么当设置的类变量不符合你定义的构造函数时，系统检测不到构造函数就会报错
    void settime(int newh, int newm, int news);
    void showtime();

private:
    int hour, minute, second;
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
clock::clock(int newh, int newm, int news) : hour(newh), minute(newm), second(news) {} //()就是传入参数赋值
clock::clock() : clock(0,0,0) {}//委托构造函数，可以保持代码实现的一致性，也就是要修改就在一个修改就行了                                      //因为没有传入参数，因此()就是自定义初始值,如果没有这个函数，在设置时没有给初始值，那么系统就会报错比如没有clock（），但是定义了clock c2
int main()
{
    clock c(8, 10, 0);
    clock c2;
    c.showtime();
    c2.showtime();
    return 0;
}