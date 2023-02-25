#include <iostream>
using namespace std;
class A
{
private:
    const int a;
    static const int b=10;//带有类内初始值设定项的成员必须为常量,也就是这里要在类内定义静态数据成员的值，就必须加const
public:
    A(int i) : a(i) {}//这里也是对应的常成员变量只能在初始化列表的时候赋值，在读取构造函数的时候也是只能这样，不能够放在构造函数的函数体中赋值，就是{}中
    void print()
    {
        cout << a << ":" << b << endl;
    }
};
int main()
{
    A a1(100), a2(0);//常成员变量只能在初始化列表的时候赋值
    a1.print();
    a2.print();
    return 0;
}