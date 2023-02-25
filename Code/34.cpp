#include<iostream>
using namespace std;
constexpr int fun1()
{
    return 20;//编译期间可计算的函数
}
int main()
{
    constexpr int foo=fun1();//可以用这样一个函数来初始化一个常量表达式变量，这个函数必须是由constexpr修饰的函数且返回值必须为常量表达式
    cout<<foo<<endl;
    return 0;
}