#include <iostream>
using namespace std;
int main()
{
    float a, b, c, t;
    cout << "请输入a,b,c \n";
    cin >> a >> b >> c;
    if (a < b)
    {
        t = a;
        a = b;
        b = t;
    }
    if (a < c)
    {
        t = a;
        a = c;
        c = t;
    }
    if (b < c)
    {
        t = b;
        b = c;
        c = t;
    }
    cout << a << b << c;
    return 0;
}
