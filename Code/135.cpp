//函数模板
#include <iostream>
using namespace std;
template <typename T>//函数模板，函数模板是不能被调用的，是编译的时候编译器根据数据类型生成了一种重载形式的函数然后调用
T abs(T x)
{
    return x < 0 ? -x : x;
}
int main()
{
    int n = -5;
    double d = -5.5;
    cout << abs(n) << endl;
    cout << abs(d) << endl;
    return 0;
}