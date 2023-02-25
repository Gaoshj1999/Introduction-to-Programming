#include <iostream>
using namespace std;
int fun1(int x,int y);
int fun2(int x);
int main()
{
    int x, y;
    cout << "请输入x，y：" << endl;
    cin >> x >> y;
    cout << "他们的平方和为：" << fun1(x, y) << endl;
    return 0;
}
int fun2(int x)
{
    return x * x;
}
int fun1(int x, int y)
{
    return fun2(x) + fun2(y);
}
