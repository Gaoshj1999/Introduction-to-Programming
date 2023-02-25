//练习1自定斐波纳契数列
#include <iostream>
using namespace std;
int fab(int a, int b, int c)
{
    if (c == 1)
    {
        return a > b ? b : a;
    }
    else if (c == 2)
    {
        return a > b ? a : b;
    }
    else
    {
        return fab(a, b, c - 1) + fab(a, b, c - 2);
    }
}
int main()
{
    int a, b, n;
    cout << "please enter two number" << endl;
    cin >> a >> b;
    cout << "please enter the rank of fab" << endl;
    cin >> n;
    cout << fab(a, b, n);
    return 0;
}