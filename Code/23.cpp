#include <iostream>
using namespace std;
double series(int x);
double factorial(int n);
double pow(double a, int n);
int main()
{
    double result, n;
    cout << "请输入次方：" << endl;
    cin >> n;
    result = series(n);
    cout << "e的" << n << "次方为：" << result << endl;
    return 0;
}
double factorial(int n)
{
    int result = 1;
    for (int i = 0; i < n; i++)
    {
        result *= (n - i);
    }
    return result;
}
double pow(double a, int n)
{
    double result = 1, i;
    for (i = 1; i <= n; i++)
    {
        result *= a;
    }
    return result;
}
double series(int x)
{
    double result = 1, n = 10;
    for (int i = 1; i <= n; i++)
    {
        result = result + (pow(x, i) / factorial(i));
    }
    return result;
}