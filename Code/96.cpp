//对象指针，就是容纳一个对象的地址的指针(一般对象有类的对象之类的),就是区别与int之类的改为point之类自己定义的类名
#include <iostream>
using namespace std;
class point
{
private:
    int x, y;

public:
    point(int x = 1, int y = 0) : x(x), y(y) {} //这个可以理解为双重构造函数，如果没赋值则给定初始值1，0，如果给了就按照给的来
    int getx() const//就这里实际上是穿了this指针也就是当前变量的地址进去的
    {
        return x;
    }
    int gety() const
    {
        return y;
    }
};
int main()
{
    point a(4, 5), b;
    point *p1 = &a;
    cout << p1->getx() << endl;
    cout << (*p1).getx() << endl; //几种指针访问对象内容的方式
    cout << a.getx() << endl;
    cout << b.getx();
    return 0;
}