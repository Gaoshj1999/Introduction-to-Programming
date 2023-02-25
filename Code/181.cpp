//异常处理
#include <iostream>
using namespace std;
int divide(int x, int y)
{
    if (y == 0)
    {
        throw x;
    }
    return x / y;
}
int main()
{
    try
    {
        cout << "5/2=" << divide(5, 2) << endl;
        cout << "8/0=" << divide(8, 0) << endl;//抛出异常后则后面语句均不再执行
        cout << "7/1=" << divide(7, 1) << endl;
    }
    catch (int e)
    {
        cout << e << "is divided by zero!" << endl;
    }
    cout << "that is ok" << endl;
    return 0;
}