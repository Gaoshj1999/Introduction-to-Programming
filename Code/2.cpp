#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, x_1, x_2;
    cout << "请输入a，b，c ";
    cin >> a;
    cin >> b;
    cin >> c;
    if (b * b > 4 * a * c)
    {
        x_1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        x_2 = (b + sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "x1=" << x_1 << "x2=" << x_2;
    }
    else if (b * b == 4 * a * c)
    {
        cout << "x1=x2=0";
    }
    else
    {
        cout << "there is no answer";
    }
    return 0;
}