#include <iostream>
using namespace std;
void swap(int &a, int &b); //这里&a表示的是引用，也就是a不再是用以外部赋值后的形参，而是准备好给实参起别名的引用，就达到了形实结合,别名在函数中有效同时又操作了实参
int main()
{
    int a, b;
    int &i = a;
    cout << "请输入一个数：" << endl;
    cin >> i;
    cout << a << endl;
    cout << "请输入两个数字：" << endl;
    cin >> a >> b;
    swap(a, b);
    cout << a << ' ' << b << endl;
    return 0;
}
void swap(int &a, int &b)
{
    int t;
    t = a;
    a = b;
    b = t;
}