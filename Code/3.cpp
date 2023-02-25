#include <iostream>
using namespace std;
int main()
{
    const double pi = 3.14159;
    float r;
    cout << "请输入圆的半径：\n";
    cin >> r;
    if (r >= 0)
    {
        cout << "圆的面积为：\n" << r * pi * r;
        cout << "圆的周长为：" << 2 * pi * r;
    }
    else
    {
        cout << "the number is impossible";
    }
    return 0;
}