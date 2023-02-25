#include <iostream>
using namespace std;
int main()
{
    float a, b, c, max;
    cout << "请输入a，b，c中的最大值\n";
    cin >> a >> b >> c;
    max = a > b ? a : b;
    max = max > c ? max : c;
    cout << "max=" << max;
    return 0;
}