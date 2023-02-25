//指向函数的指针
#include <iostream>
using namespace std;
int compute(int a, int b, int (*func)(int, int)) //不声明形参名，只声明形参类型是允许的，计算机只是通过这个判断给予的存储空间
//第一个int代表函数返回值的类型，(int ,int)代表函数的形参类型和个数是双int，(*func)是定义了一个指向前面这样一个函数的函数指针，指针变量的名字为func
{
    return func(a, b);
}
int max(int a, int b)
{
    return a > b ? a : b;
}
int min(int a, int b)
{
    return a < b ? a : b;
}
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b, res;
    cout << "请输入a:" << endl;
    cin >> a;
    cout << "请输入b:" << endl;
    cin >> b;
    res = compute(a, b, &max);//函数名代表的也是首地址，这个和数组是一样的，所以其实这里可以不加&，加上会更加清楚一点
    cout << "max of" << a << "and" << b << "is" << res << endl;
    res = compute(a, b, min);
    cout << "min of" << a << "and" << b << "is" << res << endl;
    res = compute(a, b, sum);
    cout << "sum of" << a << "and" << b << "is" << res << endl;
    return 0;
}