#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    const float pi = 3.14159;
    int r, h, l_1, l_2, a, s, l;
    cout << "please choose the type of the graph\n"
         << "1-圆；2-长方形；3-三角形" << endl;
    cin >> a;
    if ((a != 1) && (a != 2) && (a != 3))
    {
        cout << "滚" << endl;
    }
    else
    {
        switch (a)
        {
        case 1:
            cout << "请输入半径：" << endl;
            cin >> r;
            cout << "周长为:" << 2 * pi * r << endl;
            cout << "面积为:" << pi * r * r << endl;
            break;
        case 2:
            cout << "请输入长：" << endl;
            cin >> l_1;
            cout << "请输入宽：" << endl;
            cin >> l_2;
            cout << "周长为:" << 2 * l_1 * l_2 << endl;
            cout << "面积为:" << l_1 * l_2 << endl;
            break;
        case 3:
            cout << "请输入底：" << endl;
            cin >> l_1;
            cout << "请输入高：" << endl;
            cin >> h;
            cout << "周长为:" << 2 * sqrt(h * h + l_1 * l_1) + l_1 << endl;
            cout << "面积为:" << 0.5 * h * l_1 << endl;
            break;
        }
    }
    return 0;
}