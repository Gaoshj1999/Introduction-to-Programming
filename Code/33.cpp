#include <iostream>
using namespace std;
inline float calculatecircle(int r);
int main()
{
    int r;
    cout << "please enter a number" << endl;
    cin >> r;
    cout << "the area is:" << calculatecircle(r) << endl;
    return 0;
}
inline float calculatecircle(int r)//inline 表示内联函数，意为大致的建议计算机直接把代码复制过去执行程序，而不是像函数一样带入后再返回数值，这样节省空间和时间
{
    return r * r * 3.14159;
}